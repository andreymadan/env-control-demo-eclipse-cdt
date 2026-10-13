---
name: parasoft-unit-testing
description: 'Comprehensive reference for the Parasoft C/C++Test unit testing framework (cpptest.h): test suite structure, the documented CPPTEST_ASSERT_* validation macros only (integer, float, pointer, C-string, memory, enum, bit), and stub/mock registration. Also documents the Test Configuration (.properties file) settings that control where TestSuite_*.c files and user stub source files must be placed to be discovered by cpptestcli (test.suite.file.patterns, user.stub.file.patterns, ${project_loc}), the full decision procedure plus code pattern for creating a new stub in stubs.c (CppTest_Stub_*) versus implementing its stub callback (CppTest_StubCallback_*) in a Test Suite file, and the project''s one-function-per-TestSuite naming/folder convention that mirrors the source tree (tests/src/<module>_tests/TestSuite_<FunctionName>.c for src/*.c, tests/drivers/<module>_tests/TestSuite_<FunctionName>.c for drivers/*.c). Use when writing, reviewing, or debugging Parasoft C/C++Test unit tests, choosing the correct assertion macro, registering stub callbacks or stub values, structuring CPPTEST_TEST_SUITE definitions, deciding where to save a new TestSuite or stub file, determining whether a missing stub needs to be added to stubs.c, or when asked to create/add a new unit test for a specific C function.'
---

# Parasoft Unit Testing Framework - Comprehensive Skill Guide

## Overview
Parasoft provides a comprehensive unit testing framework for C/C++ that uses the `cpptest.h` header. This guide documents all test assert validation macros and related utilities.

## Test Configuration Properties & Where to Place New Test Suites

A Parasoft C/C++Test **Test Configuration** is a `.properties` file (e.g. `toolsettings/RunUnitTests-allcov.properties` in this project) passed to `cpptestcli` via `-config`. It controls, among other things, *where* `cpptestcli` looks for test suite files to execute. Before creating a new `TestSuite_*.c` file, check this file for the following keys:

- **`${project_loc}`** — an Eclipse variable that resolves to the directory containing the project's `.project` file (i.e. the project root, e.g. `env-control-demo-eclipse-cdt/`).
- **`com.parasoft.xtest.execution.api.cpp.options.test.suite.file.patterns=${project_loc}/tests/*`** — the search pattern `cpptestcli` uses to discover test suite files for execution. **Any new test suite file must be saved somewhere under this pattern (i.e. under the project's `tests/` directory, recursively) or it will not be found/run**, regardless of what `-resource` you pass.
- **`com.parasoft.xtest.execution.api.cpp.options.test_suite.search_scope=${cpptest:selected_source}`** — when a source file is tested directly (rather than its test suite), this controls how the matching test suite is located relative to the selected source.
- **`com.parasoft.xtest.execution.api.cpp.options.user.stub.file.patterns=${cpptest:cfg_dir}/safestubs;${project_loc}/stubs;${project_loc}/factory`** — a semicolon-separated list of directories `cpptestcli` scans to locate **user-supplied stub source files** (e.g. `stubs/stubs.c`), analogous to `test.suite.file.patterns` but for stubs instead of test suites. **Any new hand-written stub file must be saved under one of these directories (`${project_loc}/stubs` or `${project_loc}/factory` in this project) or `cpptestcli` will not pick it up**, even if it compiles and defines valid `CPPTEST_REGISTER_STUB_*`-compatible functions. This key is only honored when the companion flag is enabled:
  - **`com.parasoft.xtest.execution.api.cpp.options.user.stub.file.patterns.enabled=true`** — must be `true` for `user.stub.file.patterns` to take effect; if `false`, user stub directories are ignored entirely.
- The generator's output-location settings do not define this repository's maintained suite layout. Keep every suite under `tests/<source_dir>/<module>_tests/`, with one `TestSuite_<FunctionName>.c` per function, as specified in the naming convention below.

**Rule of thumb:** before creating or writing a new test suite or stub file, read the project's active Test Configuration `.properties` file and resolve `test.suite.file.patterns` (for suites) or `user.stub.file.patterns` (for stubs) against `${project_loc}` (the project root). Place suites in the canonical per-function layout under `tests/` and ensure they match the configured discovery pattern; otherwise `cpptestcli -resource ...` may report 0 tests found. Place user stubs under a configured stub directory or they may not be applied.

---

## Creating and Wiring Stubs

### What a Stub Is

A **stub** replaces a call to some function (a driver, another module's function, a library/OS call) with a controllable fake during unit test execution, so the function *under test* doesn't execute the real dependency. Every stub lives in two separate places, and this split is intentional and must never be collapsed:

| Piece | Function name pattern | Lives in |
|---|---|---|
| **Stub definition** (generated once per stubbed function, boilerplate dispatcher) | `CppTest_Stub_<FunctionName>` | `stubs/stubs.c` (or wherever `user.stub.file.patterns` resolves — see above) |
| **Stub callback** (test-specific fake behavior) | `CppTest_StubCallback_<SomeName>` | The **Test Suite file** (`TestSuite_*.c`) that needs to control that function's behavior — **never** in `stubs.c` |

At runtime each stub definition in `stubs.c` behaves in one of two ways, decided per test case:

1. **No callback registered (default):** the stub falls through to `CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()` and calls the real function — behavior is unchanged from production.
2. **Callback registered** (via `CPPTEST_REGISTER_STUB_CALLBACK("FunctionName", &CppTest_StubCallback_SomeName)` inside a test case): control redirects to the callback implemented in the Test Suite, which can set a fake return value, fake an out-parameter, or just observe the call — without touching `stubs.c`.

This is why a test can "fake a return value" for a dependency purely by adding a callback function + one registration line to the Test Suite — **as long as a stub definition for that dependency already exists in `stubs.c`**.

### Decision Procedure: When Must a New Stub Be Added to stubs.c?

When writing or generating tests for a function `A` (the function under test), and `A` calls another function `B` whose behavior you want to control (force a return code, fake sensor/driver output, avoid a real side effect like I/O, a hardware call, or a nested business-logic call):

1. **Check whether `B` is already stubbed.** Search `stubs/stubs.c` for `User stub definition for function: ... B(...)` or `CppTest_Stub_B`.
2. **If a stub for `B` already exists:** do nothing to `stubs.c`. Just add a `CppTest_StubCallback_*` function in the Test Suite and register it with `CPPTEST_REGISTER_STUB_CALLBACK("B", &CppTest_StubCallback_YourName)` inside the relevant test case.
3. **If no stub for `B` exists yet:** a new stub definition must be added to `stubs.c` first, following the exact pattern below, using `B`'s real signature (look it up in its header/.c file). Only after the stub definition exists in `stubs.c` can a Test Suite register a callback for it.

This applies uniformly whether `B` is a low-level driver function (e.g. `FanDriver_On`, `Clock_GetSeconds`), a sibling module function in `src/` (e.g. `ActuatorManager_StopAll`, `AlarmManager_Activate`, `SensorManager_Read`), or a library/OS call (e.g. `printf`, `Sleep`). In this project, `stubs/stubs.c` already stubs essentially every externally-callable function in `drivers/` and `src/` (see the file for the full list) — but if a test needs to stub a brand-new function (e.g. one just added to a module, or a library call never stubbed before), it must be added following this procedure.

### Pattern: Adding a New Stub Definition to stubs.c

Copy this exact structure, adapting `<ReturnType>`, `<FunctionName>`, and `<params>` to the real declaration (found in the function's header). **Never delete or modify the `IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED` comment** — Parasoft tooling relies on it.

For a function with a non-void return and parameters, e.g. `int <FunctionName>(<Type1> <param1>, <Type2> <param2>)`:
```c
/** User stub definition for function: <ReturnType> <FunctionName>(<Type1>, <Type2>) */
EXTERN_C_LINKAGE <ReturnType> <FunctionName> (<Type1> <param1>, <Type2> <param2>) ;
EXTERN_C_LINKAGE <ReturnType> CppTest_Stub_<FunctionName> (<Type1> <param1>, <Type2> <param2>)
{
    CPPTEST_STUB_CALLED("<FunctionName>");

    <ReturnType> __return = 0;

    /**
     * This section enables Dynamic Stub Configuration with Stub Callbacks.
     *
     * IMPORTANT: THIS COMMENT BLOCK SHOULD NOT BE DELETED OR MODIFIED
     *
     * 1. Define stub callback function in test suite file - use the following signature:
     *     void CppTest_StubCallback_SomeName(CppTest_StubCallInfo* stubCallInfo, <ReturnType>* __return, <Type1> <param1>, <Type2> <param2>)
     *
     * 2. Register stub callback in test case function - use the following code:
     *     CPPTEST_REGISTER_STUB_CALLBACK("<FunctionName>", &CppTest_StubCallback_SomeName);
     *
     * 3. Fill out the body of the stub callback function according to intent.
     * The following line may be used to call original function inside stub callback:
     *     *__return = <FunctionName>(<param1>, <param2>);
     */
    if (CPPTEST_STUB_HAS_CALLBACK()) {
        CPPTEST_STUB_CALLBACK_PARAMS(<ReturnType>* __return, <Type1> <param1>, <Type2> <param2>);
        CPPTEST_STUB_INVOKE_CALLBACK(&__return, <param1>, <param2>);

    } else if (CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()) {
        __return = <FunctionName>(<param1>, <param2>);

    } else {
        /* You can put additional stub logic here. */

    }

    return __return;
}
```

For a **`void`-returning** function, drop `__return`/the `return` statement and the callback's `<ReturnType>* __return` parameter (e.g. `AlarmManager_Activate(AlarmType alarm)`, `DisplayDriver_ShowAlarm(int alarmCode)`, `BuzzerDriver_Enable(void)` in `stubs/stubs.c` are real examples of this shape — with zero, one, or more parameters).

For a **variadic** function (e.g. `printf`), there is no `CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()` branch (varargs can't be portably forwarded) — only the callback branch and the empty `else` fallback are generated; see `CppTest_Stub_printf` in `stubs/stubs.c` for the exact shape.

For pointer/out-parameters (e.g. `int HumiditySensor_ReadPercent(float * humidity)`, `void Config_LoadDefaults(SystemConfig * config)`), pass the pointer through unchanged in both the real-function fallback call and `CPPTEST_STUB_CALLBACK_PARAMS`/`CPPTEST_STUB_INVOKE_CALLBACK` — the callback can then write through that pointer to fake the output.

### Pattern: Implementing the Stub Callback in a Test Suite

The callback itself is ordinary C and is written **only** in the Test Suite file, matching the signature given in the stub's comment block:

```c
/* In the Test Suite file, e.g. tests/src/controller_tests/TestSuite_Controller_RunCycle.c */
void CppTest_StubCallback_SensorRead_Fails(CppTest_StubCallInfo* stubCallInfo, int* __return, SensorData* data)
{
    /* Fake a sensor read failure without touching the real driver */
    *__return = -1;
}

void test_Controller_RunCycle_sensor_read_fails(void)
{
    CPPTEST_REGISTER_STUB_CALLBACK("SensorManager_Read", &CppTest_StubCallback_SensorRead_Fails);

    Controller controller;
    /* ... call Controller_RunCycle(&controller) and assert on the alarm/failure path ... */
}
```

**Summary rule the agent must always follow:** stub *definitions* (`CppTest_Stub_*`) only ever go in `stubs/stubs.c` (never in a Test Suite); stub *callbacks* (`CppTest_StubCallback_*`) only ever go in a Test Suite file (never in `stubs.c`).

---

## One-Function-Per-TestSuite Naming Convention

This project organizes test suites so that **each TestSuite tests exactly one C function**, and suites for a given source file live together in a dedicated folder under `tests/`.

### Folder and file layout

```
tests/<source_dir>/<module>_tests/TestSuite_<FunctionName>.c
```

- `<source_dir>` = the top-level source directory the file lives under, mirrored 1:1 under `tests/`: `src/*.c` -> `tests/src/`, `drivers/*.c` -> `tests/drivers/`. If a new top-level source folder is ever added to the project, mirror it the same way (e.g. a future `lib/*.c` would go under `tests/lib/`).
- `<module>` = the source file's base name without extension, e.g. `controller.c` -> `controller_tests/`, `fan_driver.c` -> `fan_driver_tests/`.
- `<FunctionName>` = the exact name of the single function under test, e.g. `Controller_Init`, `ActuatorManager_StopAll`, `FanDriver_On`.
- One file per function — **never** combine tests for two different functions in the same `TestSuite_*.c` file, even if they're in the same source file (e.g. `src/controller.c` has three separate files: `tests/src/controller_tests/TestSuite_Controller_Init.c`, `TestSuite_Controller_RunCycle.c`, `TestSuite_Controller_GetState.c`).
- Concrete examples in this project: `src/actuator_manager.c` -> `tests/src/actuator_manager_tests/`, `src/alarm_manager.c` -> `tests/src/alarm_manager_tests/`, `src/config.c` -> `tests/src/config_tests/`, `src/controller.c` -> `tests/src/controller_tests/`, `src/main.c` -> `tests/src/main_tests/`, `src/sensor_manager.c` -> `tests/src/sensor_manager_tests/`; `drivers/buzzer_driver.c` -> `tests/drivers/buzzer_driver_tests/`, `drivers/clock_driver.c` -> `tests/drivers/clock_driver_tests/`, `drivers/display_driver.c` -> `tests/drivers/display_driver_tests/`, `drivers/fan_driver.c` -> `tests/drivers/fan_driver_tests/`, `drivers/heater_driver.c` -> `tests/drivers/heater_driver_tests/`, `drivers/humidity_sensor.c` -> `tests/drivers/humidity_sensor_tests/`, `drivers/logger_driver.c` -> `tests/drivers/logger_driver_tests/`, `drivers/temperature_sensor.c` -> `tests/drivers/temperature_sensor_tests/`.
- All of this is still under `tests/`, so it's automatically covered by `com.parasoft.xtest.execution.api.cpp.options.test.suite.file.patterns=${project_loc}/tests/*` (see above) — no Test Configuration changes are needed to add a new module folder or a new mirrored source directory.

### Inside each file

- `CPPTEST_CONTEXT(...)` / `CPPTEST_TEST_SUITE_INCLUDED_TO(...)` still point at the **source file** (not the test file), exactly as in the single-suite-per-file pattern.
- The suite identifier is simply `TestSuite_<FunctionName>` (no random hex suffix — the function name is already unique project-wide, which keeps the convention deterministic and diff-friendly).
- Test case names inside the file don't need the function name repeated (the file/suite name already scopes them), e.g. `TestSuite_ActuatorManager_StopAll_test_both_success`, not `..._test_ActuatorManager_StopAll_both_success`.
- If the function under test needs stub callbacks for its dependencies, define them in this same file (see "Creating and Wiring Stubs" above) and **give the callback a name prefixed with this function**, e.g. `CppTest_StubCallback_StopAll_HeaterDriver_Off_Success`, not a generic name like `CppTest_StubCallback_HeaterDriver_Off_Success`. This is required because every `TestSuite_*.c` file is compiled into the same test executable: if two per-function suites both call the same dependency and both declare a same-named global callback function, you get a duplicate-symbol link error. Per-function prefixing guarantees uniqueness.

### Procedure: "Create me a new unit test for function X"

When asked to create a unit test for a function `X` (defined in some source file `Y.c`):

1. **Determine the module folder**: `tests/<source_dir>/<Y>_tests/`, where `<source_dir>` mirrors whichever top-level source folder `Y.c` lives in (`src/` or `drivers/`) and `<Y>` is `Y.c`'s base name (create the folder if it doesn't exist yet — it will be auto-discovered, no config changes needed).
2. **Check whether a suite already exists** for `X`: look for `tests/<source_dir>/<Y>_tests/TestSuite_<X>.c`.
   - If it exists, add the new test case(s) to that existing file (update its `CPPTEST_TEST_SUITE(...)` test list, forward declarations, and implementation) — do **not** create a second file for the same function.
   - If it does not exist, create a new file following the template below.
3. **For any dependency `X` calls that needs to be faked/controlled**, apply the stub decision procedure above: check `stubs/stubs.c` for an existing stub definition for that dependency; add one if missing (in `stubs.c`), then add a per-function-prefixed callback in this new TestSuite file.
4. **Verify discovery** by resolving `test.suite.file.patterns` against `${project_loc}` — the new file must land under `tests/`.

### Minimal new-suite template

```c
#include "cpptest.h"

CPPTEST_CONTEXT("/<project_name>/<path_to>/Y.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/<project_name>/<path_to>/Y.c");

EXTERN_C_LINKAGE void TestSuite_X_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_X_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_X);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_X_testSuiteSetUp);
        CPPTEST_TEST(TestSuite_X_test_success);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_X_testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

void TestSuite_X_test_success(void);

CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_X);

void TestSuite_X_testSuiteSetUp(void) { }
void TestSuite_X_testSuiteTearDown(void) { }
void TestSuite_X_setUp(void) { }
void TestSuite_X_tearDown(void) { }

void TestSuite_X_test_success(void)
{
    /* Arrange / Act / Assert for X() */
}
```

Save this as `tests/<source_dir>/<Y>_tests/TestSuite_X.c` (e.g. `tests/src/controller_tests/TestSuite_Controller_Init.c` or `tests/drivers/fan_driver_tests/TestSuite_FanDriver_On.c`).

---

## Basic Test Structure

### Test Suite Definition
```c
#include "cpptest.h"

CPPTEST_CONTEXT("/path/to/source/file.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/path/to/source/file.c");

CPPTEST_TEST_SUITE(TestSuiteName);
    CPPTEST_TEST_SUITE_SETUP(testSuiteSetUp);
    CPPTEST_TEST(test_function_1);
    CPPTEST_TEST(test_function_2);
    CPPTEST_TEST_SUITE_TEARDOWN(testSuiteTearDown);
CPPTEST_TEST_SUITE_END();

CPPTEST_TEST_SUITE_REGISTRATION(TestSuiteName);
```

### Test Case Setup and Teardown
```c
void testSuiteSetUp(void) {
    /* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
    /* Initialize resources for all tests */
    /* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void testSuiteTearDown(void) {
    /* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
    /* Clean up resources after all tests */
    /* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void setUp(void) {
    /* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
    /* Initialize resources for each test */
    /* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void tearDown(void) {
    /* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
    /* Clean up resources after each test */
    /* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}
```

---

## Test Case Validation Macros

Source of truth: [Test Case Validation Macros](https://docs.parasoft.com/display/CPPTESTPROEC20261/Test+Case+Validation+Macros) (C/C++test Professional 2026.1). **Use ONLY the macros listed here.** Do not invent variants (for example there is no `CPPTEST_ASSERT_DOUBLE_EQUAL_DELTA`, `CPPTEST_ASSERT_TRUE/FALSE`, `CPPTEST_ASSERT_NULL/NOT_NULL`, `CPPTEST_ASSERT_NOT_EQUAL`, `CPPTEST_ASSERT_INTEGER_NOT_EQUAL`, `CPPTEST_ASSERT_INTEGER_GREATER/LESS`, `CPPTEST_ASSERT_STRING_*`, or `CPPTEST_POST_CONDITION_*` macro in the documentation). An undocumented macro compiles as an implicit function or fails to link, which can silently prevent the whole suite from running.

Every macro below also has a `_MESSAGE` variant that takes a custom failure message as its **first** argument, noted per macro. Use the plain form unless a message is needed.

### GENERAL

| Macro | Purpose |
|-------|---------|
| `CPPTEST_FAIL(message)` | Fails unconditionally with a custom message. |
| `CPPTEST_ASSERT(condition)` | Asserts a condition is true. Use for boolean checks, relational checks (`<`, `>`, `!=`), and NULL/non-NULL checks (`CPPTEST_ASSERT(ptr == NULL)`, `CPPTEST_ASSERT(ptr != NULL)`). |
| `CPPTEST_ASSERT_MESSAGE(message, condition)` | Same, with a custom failure message. |
| `CPPTEST_ASSERT_EQUAL(expected, actual)` | Asserts two values are equal (generic). |
| `CPPTEST_ASSERT_EQUAL_MESSAGE(message, expected, actual)` | Same, with a custom failure message. |
| `CPPTEST_ASSERT_BOOL_EQUAL(expected, actual)` | Asserts two boolean values are equal. |
| `CPPTEST_ASSERT_BOOL_EQUAL_MESSAGE(message, expected, actual)` | Same, with a custom failure message. |

### INTEGER

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_INTEGER_EQUAL(expected, actual)` | Signed integers equal. |
| `CPPTEST_ASSERT_INTEGER_EQUAL_MESSAGE(message, expected, actual)` | Same, with message. |
| `CPPTEST_ASSERT_INTEGER_EQUAL_DELTA(expected, actual, delta)` | Signed integers equal within `delta`. |
| `CPPTEST_ASSERT_INTEGER_EQUAL_DELTA_MESSAGE(message, expected, actual, delta)` | Same, with message. |
| `CPPTEST_ASSERT_INTEGER_ARRAY_EQUAL(expected, actual, size)` | First `size` elements of two integer arrays equal. |
| `CPPTEST_ASSERT_INTEGER_ARRAY_EQUAL_DELTA(expected, actual, size, delta)` | Same, within `delta`. |
| `CPPTEST_ASSERT_UINTEGER_EQUAL(expected, actual)` | Unsigned integers equal. |
| `CPPTEST_ASSERT_UINTEGER_EQUAL_MESSAGE(message, expected, actual)` | Same, with message. |
| `CPPTEST_ASSERT_UINTEGER_EQUAL_DELTA(expected, actual, delta)` | Unsigned integers equal within `delta`. |
| `CPPTEST_ASSERT_UINTEGER_EQUAL_DELTA_MESSAGE(message, expected, actual, delta)` | Same, with message. |
| `CPPTEST_ASSERT_UINTEGER_ARRAY_EQUAL(expected, actual, size)` | Unsigned integer arrays equal. |
| `CPPTEST_ASSERT_UINTEGER_ARRAY_EQUAL_DELTA(expected, actual, size, delta)` | Same, within `delta`. |

```c
CPPTEST_ASSERT_INTEGER_EQUAL(5, add(2, 3));
CPPTEST_ASSERT_UINTEGER_EQUAL(0UL, controller.lastFanStopTime);
```

### FLOATING POINT

`delta` is required: there is no default-tolerance variant.

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(expected, actual, delta)` | Floating-point values equal within `delta` (use for `float` and `double`). |
| `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA_MESSAGE(message, expected, actual, delta)` | Same, with message. |
| `CPPTEST_ASSERT_FLOAT_ARRAY_EQUAL_DELTA(expected, actual, size, delta)` | Floating-point arrays equal within `delta`. |
| `CPPTEST_ASSERT_FLOAT_EQUAL(expected, actual, delta)` | Equivalent to `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA`. |
| `CPPTEST_ASSERT_DOUBLES_EQUAL(expected, actual, delta)` | Equivalent to `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA`. |
| `CPPTEST_ASSERT_DOUBLES_EQUAL_MESSAGE(message, expected, actual, delta)` | Equivalent to `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA_MESSAGE`. |
| `CPPTEST_ASSERT_DOUBLES_FMT_EQUAL(expected, actual)` | Doubles equal (compared as converted strings). |
| `CPPTEST_ASSERT_DOUBLES_FMT_EQUAL_MESSAGE(message, expected, actual)` | Same, with message. |

```c
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(22.0, controller.config.targetTemperature, 0.001);
```

### POINTER

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_PTR_EQUAL(expected, actual)` | Pointers equal. |
| `CPPTEST_ASSERT_PTR_EQUAL_MESSAGE(message, expected, actual)` | Same, with message. |
| `CPPTEST_ASSERT_PTR_ARRAY_EQUAL(expected, actual, size)` | Pointer arrays equal. |

For NULL checks use `CPPTEST_ASSERT_PTR_EQUAL(NULL, ptr)` or `CPPTEST_ASSERT(ptr != NULL)`.

### STRING

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_CSTR_EQUAL(expected, actual)` | C strings equal. |
| `CPPTEST_ASSERT_CSTR_EQUAL_MESSAGE(message, expected, actual)` | Same, with message. |
| `CPPTEST_ASSERT_CSTR_N_EQUAL(expected, actual, max_size)` | First `max_size` characters equal. |
| `CPPTEST_ASSERT_CSTR_N_EQUAL_MESSAGE(message, expected, actual, max_size)` | Same, with message. |
| `CPPTEST_ASSERT_CSTR_ARRAY_EQUAL(expected, actual, size)` | Arrays of C strings equal. |
| `CPPTEST_ASSERT_WCSTR_EQUAL(expected, actual)` | Wide-character C strings equal. |
| `CPPTEST_ASSERT_WCSTR_EQUAL_MESSAGE(message, expected, actual)` | Same, with message. |

```c
CPPTEST_ASSERT_CSTR_EQUAL("hello", result);
```

### MEMORY / BUFFER

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_MEM_BUFFER_EQUAL(expected, actual, size)` | Compares `size` bytes of two buffers. |
| `CPPTEST_ASSERT_MEM_BUFFER_EQUAL_MESSAGE(message, expected, actual, size)` | Same, with message. |
| `CPPTEST_ASSERT_MEMORY_LEAKS()` | Asserts that blocks allocated during the test were freed. Requires Memory Monitoring in the Test Configuration. |

### ENUM

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_ENUM_EQUAL(scoped_enum_name, expected, actual)` | Enum/integral values equal; first argument is the enum type name. |
| `CPPTEST_ASSERT_ENUM_EQUAL_MESSAGE(scoped_enum_name, msg, expected, actual)` | Same, with message (note: the message is the **second** argument). |

```c
CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);
```

### BIT

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_BITS(mask, expected, actual)` | Masked bits of `expected` and `actual` equal. |
| `CPPTEST_ASSERT_BITS_MESSAGE(message, mask, expected, actual)` | Same, with message. |
| `CPPTEST_ASSERT_BITS_HIGH(mask, actual)` | Masked bits of `actual` are high. |
| `CPPTEST_ASSERT_BITS_HIGH_MESSAGE(message, mask, actual)` | Same, with message. |
| `CPPTEST_ASSERT_BITS_LOW(mask, actual)` | Masked bits of `actual` are low. |
| `CPPTEST_ASSERT_BITS_LOW_MESSAGE(message, mask, actual)` | Same, with message. |
| `CPPTEST_ASSERT_BIT_HIGH(n, actual)` | Bit `n` of `actual` is high. |
| `CPPTEST_ASSERT_BIT_HIGH_MESSAGE(message, n, actual)` | Same, with message. |
| `CPPTEST_ASSERT_BIT_LOW(n, actual)` | Bit `n` of `actual` is low. |
| `CPPTEST_ASSERT_BIT_LOW_MESSAGE(message, n, actual)` | Same, with message. |

### FORMATTED (custom printf format for reported values)

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_EQUAL_FMT(expected, actual, format)` | Equal; reports values using a printf `format`. |
| `CPPTEST_ASSERT_EQUAL_DELTA_FMT(expected, actual, delta, format)` | Equal within `delta`, custom format. |
| `CPPTEST_ASSERT_ARRAY_EQUAL_FMT(expected, actual, size, format)` | Arrays equal, custom format. |
| `CPPTEST_ASSERT_ARRAY_EQUAL_DELTA_FMT(expected, actual, size, delta, format)` | Arrays equal within `delta`, custom format. |

### EXCEPTIONS (C++ only) AND EXTERNAL

| Macro | Purpose |
|-------|---------|
| `CPPTEST_ASSERT_THROW(expression, ExceptionType)` | Expression throws the given exception type. |
| `CPPTEST_ASSERT_THROW_MESSAGE(message, expression, ExceptionType)` | Same, with message. |
| `CPPTEST_ASSERT_NO_THROW(expression)` | Expression throws nothing. |
| `CPPTEST_ASSERT_NO_THROW_MESSAGE(message, expression)` | Same, with message. |
| `CPPTEST_ASSERT_EXTERNAL(program, param1, param2, param3)` | Validates via an external program (non-zero exit fails). |
| `CPPTEST_ASSERT_EXTERNAL_MESSAGE(message, program, param1, param2, param3)` | Same, with message. |

### Replacements for common non-existent macros

| Do not use | Use instead |
|------------|-------------|
| `CPPTEST_ASSERT_TRUE(x)` / `CPPTEST_ASSERT_FALSE(x)` | `CPPTEST_ASSERT(x)` / `CPPTEST_ASSERT(!(x))`, or `CPPTEST_ASSERT_BOOL_EQUAL(1, x)` |
| `CPPTEST_ASSERT_NULL(p)` / `CPPTEST_ASSERT_NOT_NULL(p)` | `CPPTEST_ASSERT_PTR_EQUAL(NULL, p)` / `CPPTEST_ASSERT(p != NULL)` |
| `CPPTEST_ASSERT_NOT_EQUAL`, `*_NOT_EQUAL`, `*_GREATER`, `*_LESS` | `CPPTEST_ASSERT(a != b)`, `CPPTEST_ASSERT(a > b)`, etc. |
| `CPPTEST_ASSERT_INT_EQUAL` | `CPPTEST_ASSERT_INTEGER_EQUAL` |
| `CPPTEST_ASSERT_DOUBLE_EQUAL*` | `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA` |
| `CPPTEST_ASSERT_STRING_EQUAL` | `CPPTEST_ASSERT_CSTR_EQUAL` |
| `CPPTEST_ASSERT_ENUM_NOT_EQUAL` | `CPPTEST_ASSERT(a != b)` |
| `CPPTEST_POST_CONDITION_*` | Not part of the documented validation macros; do not write them by hand (Parasoft-generated code may contain them). |

---

### REPORTING MACROS

#### CPPTEST_REPORT_INTEGER
Reports an integer value during test execution.
```c
CPPTEST_REPORT_INTEGER("label", value);
```
**Example:**
```c
CPPTEST_REPORT_INTEGER("initial_index", 101);
```

#### CPPTEST_REPORT_STRING
Reports a string value during test execution.
```c
CPPTEST_REPORT_STRING("label", string);
```

#### CPPTEST_REPORT_DOUBLE
Reports a double value during test execution.
```c
CPPTEST_REPORT_DOUBLE("label", value);
```

---

### STUB/MOCK MACROS

#### CPPTEST_REGISTER_STUB_CALLBACK
Registers a callback function for a stubbed function.
```c
CPPTEST_REGISTER_STUB_CALLBACK("function_name", &callbackFunction);
```
**Example:**
```c
void CppTest_StubCallback_query_user(CppTest_StubCallInfo* stubCallInfo, 
                                     struct timer_record ** __return)
{
    *__return = NULL;
}

// In test:
CPPTEST_REGISTER_STUB_CALLBACK("query_user", &CppTest_StubCallback_query_user);
```

#### CPPTEST_REGISTER_STUB_VALUE
Registers a return value for a stubbed function.
```c
CPPTEST_REGISTER_STUB_VALUE("function_name", return_value);
```

#### Stub-definition macros (used inside stubs.c, not in a Test Suite)
These macros appear only in the boilerplate `CppTest_Stub_<FunctionName>` dispatcher body in `stubs/stubs.c` (see "Creating and Wiring Stubs" above for the full pattern):

- **`EXTERN_C_LINKAGE`** — linkage specifier prefix used on both the forward declaration of the real function and the `CppTest_Stub_*` definition, ensuring C linkage even if compiled as C++.
- **`CPPTEST_STUB_CALLED("FunctionName")`** — records that the stub was invoked (enables stub-call reporting/verification); first line of every stub body.
- **`CPPTEST_STUB_HAS_CALLBACK()`** — `true` when the current test case registered a callback via `CPPTEST_REGISTER_STUB_CALLBACK` for this function.
- **`CPPTEST_STUB_CALLBACK_PARAMS(...)`** — declares the parameter list forwarded to the callback; must match the callback's expected signature (`<ReturnType>* __return` first, if non-void, then the original parameters).
- **`CPPTEST_STUB_INVOKE_CALLBACK(...)`** — actually invokes the registered callback with the declared params.
- **`CPPTEST_STUB_HAS_ORIGINAL_DEFINITION()`** — `true` when no callback is registered but the real function's original definition is available to fall back to (not available for variadic functions like `printf`).

---

### UTILITY FUNCTIONS

#### cpptestLimitsGetMaxInt()
Returns the maximum value for an int type.
```c
int max_value = cpptestLimitsGetMaxInt();
```

#### cpptestLimitsGetMinInt()
Returns the minimum value for an int type.
```c
int min_value = cpptestLimitsGetMinInt();
```

#### cpptestMemset()
Memory set utility - initializes memory regions.
```c
char buffer[10];
cpptestMemset((void*)&buffer, 0, sizeof(buffer));
```

#### cpptestAlloc()
Allocates memory for test use.
```c
char* ptr = (char*)cpptestAlloc(100 * sizeof(char));
```

#### cpptestFree()
Frees allocated memory.
```c
cpptestFree(ptr);
```

---

## Complete Test Example

```c
#include "cpptest.h"

CPPTEST_CONTEXT("/app/math.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/app/math.c");

CPPTEST_TEST_SUITE(TestMath);
    CPPTEST_TEST_SUITE_SETUP(TestMath_setUp);
    CPPTEST_TEST(test_add_positive_numbers);
    CPPTEST_TEST(test_add_with_zero);
    CPPTEST_TEST(test_multiply_numbers);
    CPPTEST_TEST_SUITE_TEARDOWN(TestMath_tearDown);
CPPTEST_TEST_SUITE_END();

CPPTEST_TEST_SUITE_REGISTRATION(TestMath);

void TestMath_setUp(void) {
    /* Initialize test resources */
}

void TestMath_tearDown(void) {
    /* Clean up test resources */
}

/* Test Case 1: Addition with positive numbers */
void test_add_positive_numbers(void) {
    /* Arrange */
    int a = 5;
    int b = 3;
    
    /* Act */
    int result = add(a, b);
    
    /* Assert */
    CPPTEST_ASSERT_INTEGER_EQUAL(8, result);
}

/* Test Case 2: Addition with zero */
void test_add_with_zero(void) {
    /* Arrange */
    int a = 5;
    int b = 0;
    
    /* Act */
    int result = add(a, b);
    
    /* Assert */
    CPPTEST_ASSERT_INTEGER_EQUAL(5, result);
}

/* Test Case 3: Multiplication */
void test_multiply_numbers(void) {
    /* Arrange */
    double a = 2.5;
    double b = 4.0;
    
    /* Act */
    double result = multiply(a, b);
    
    /* Assert - with delta for floating point comparison */
    CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(10.0, result, 0.001);
}
```

---

## Test Case Organization Best Practices

1. **One assertion per test** (preferred) or related assertions
2. **Arrange-Act-Assert pattern**:
   - Arrange: Set up test data
   - Act: Call the function being tested
   - Assert: Verify the results

3. **Test naming**: `test_<function>_<scenario>`
4. **Use pre-conditions** for complex setup
5. **Use only documented validation macros** (see the Test Case Validation Macros section)
6. **Use stubs/mocks** for external dependencies

---

## Common Patterns

### Testing with Stubs
```c
void test_with_stub(void) {
    CPPTEST_REGISTER_STUB_CALLBACK("external_func", &stub_callback);
    
    /* Call function that uses external_func */
    int result = function_under_test();
    
    CPPTEST_ASSERT_INTEGER_EQUAL(expected, result);
}
```

### Testing with Allocated Memory
```c
void test_with_memory(void) {
    /* Allocate */
    char* buffer = (char*)cpptestAlloc(100);
    cpptestMemset(buffer, 0, 100);
    
    /* Test */
    function_that_modifies(buffer);
    
    /* Assert */
    CPPTEST_ASSERT_CSTR_EQUAL("expected", buffer);
}
```

### Testing Boundary Values
```c
void test_boundary_values(void) {
    /* Test with maximum value */
    int max = cpptestLimitsGetMaxInt();
    int result = function(max);
    CPPTEST_ASSERT_INTEGER_EQUAL(expected_max, result);
    
    /* Test with minimum value */
    int min = cpptestLimitsGetMinInt();
    result = function(min);
    CPPTEST_ASSERT_INTEGER_EQUAL(expected_min, result);
}
```

---

## References
- Official Parasoft Documentation: https://docs.parasoft.com/display/CPPTESTPROEC20261/Test+Case+Validation+Macros
- Framework Header: `cpptest.h`

---

**Last Updated:** August 14, 2026
**Framework:** Parasoft C/C++ Test Framework
**Version:** 2026.1
