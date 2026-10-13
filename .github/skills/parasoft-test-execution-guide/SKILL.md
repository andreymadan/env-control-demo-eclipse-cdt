---
name: parasoft-test-execution-guide
description: 'Execution and troubleshooting guide for Parasoft C/C++Test unit tests: compiling/running via cpptestcli command line, Eclipse CDT IDE, or Make; assertion and stub macro quick reference; expected test-run output format; common troubleshooting (missing cpptest.h, link errors, stub values not applying, state not resetting between tests). Use when the user needs to run, compile, debug, or troubleshoot Parasoft C/C++Test unit tests.'
---

# Unit Test Execution Guide - Parasoft Framework

## Preferred: Project Scripts

For this project, prefer the ready-made wrapper scripts in [../../../scripts](../../../scripts) over calling `cpptestcli` directly — they already carry the correct `-data`/`-config`/`-settings` values (overridable via environment variables, see [common.bat](../../../scripts/common.bat)). Maintained suites follow the one-function-per-file layout documented in the [unit testing guide](../parasoft-unit-testing/Skill.md): `tests/<source_dir>/<module>_tests/TestSuite_<FunctionName>.c`.

- [RunUnitTests_All.bat](../../../scripts/RunUnitTests_All.bat) — run unit tests for the whole project.
- [RunUnitTests_Files.bat](../../../scripts/RunUnitTests_Files.bat) `<file1> [file2] ...` or `<list.lst>` — run unit tests scoped to one or more source files (paths relative to the project root, e.g. `src\controller.c`).

For either script, a single `.lst` file argument is passed straight through to `cpptestcli`'s native resource-list-file support (one fully-qualified resource path per line). To run maintained tests for a source file, pass that source path to `RunUnitTests_Files.bat`; Parasoft discovers the corresponding suite(s) under `tests/`.

## How to Compile and Run

### Option 1: Command Line (cpptestcli)

```bash
# Navigate to workspace
cd <workspace_root>

# Run all tests
cpptestcli -data [workspace_root] -config [config_file] -execute

# Run maintained suites for a specific source file
RunUnitTests_Files.bat src\controller.c

# Generate a coverage report
cpptestcli -data [workspace_root] -config [config_file] \
  -report coverage -format html
```

### Option 2: Eclipse IDE

1. Open Eclipse CDT.
2. Import test projects: File -> Import -> Existing Projects into Workspace.
3. Run tests: right-click the test file -> Run As -> C/C++Test Test (or Run -> Run Configurations -> C/C++Test Test).
4. View coverage: Window -> Show View -> C/C++Test Report, and C/C++Test Coverage.

### Option 3: Make/Build System

```makefile
CPPTEST_INCLUDE = -I$(CPPTEST_HOME)/include
CPPTEST_LIB = $(CPPTEST_HOME)/lib

test: $(SOURCES)
	$(CC) $(CPPTEST_INCLUDE) $(SOURCES) $(TEST_SOURCES) \
	      -L$(CPPTEST_LIB) -lcpptest -o test_runner
	./test_runner
```

---

## Test Assertions Quick Reference

### Integer Comparisons
```c
CPPTEST_ASSERT_INTEGER_EQUAL(expected, actual);      // Signed equal
CPPTEST_ASSERT_UINTEGER_EQUAL(expected, actual);     // Unsigned equal
```

### Enum Comparisons
```c
CPPTEST_ASSERT_ENUM_EQUAL(EnumType, expected, actual);
```

### Boolean, Relational, and Pointer Assertions
```c
CPPTEST_ASSERT(condition);                            // Condition is true
CPPTEST_ASSERT(a != b);                               // Not equal / relational
CPPTEST_ASSERT_PTR_EQUAL(NULL, pointer);              // Is NULL
CPPTEST_ASSERT(pointer != NULL);                      // Is not NULL
```

### Floating Point
```c
CPPTEST_ASSERT_FLOAT_EQUAL_DELTA(expected, actual, delta);
```

Only macros documented at the Parasoft [Test Case Validation Macros](https://docs.parasoft.com/display/CPPTESTPROEC20261/Test+Case+Validation+Macros) page are valid. For the complete list (strings, memory/buffer, bits, `_MESSAGE` variants), see the `parasoft-unit-testing` skill.

---

## Stub Macros Quick Reference

```c
/* Return fixed values */
CPPTEST_REGISTER_STUB_VALUE("function_name", return_value);

/* Register custom callbacks */
CPPTEST_REGISTER_STUB_CALLBACK("function_name", &callback_func);
```

Typical stub categories seen across a project:
- **Return-code stubs** — driver/manager functions returning success (`0`) or failure (`-1`), configured per test.
- **No-op stubs** — display/buzzer/logger/I/O functions with no return value relevant to the test.
- **Time stubs** — clock/timer getters returning a configurable timestamp to drive boundary/cooldown logic.

---

## Expected Test Output Format

```
=============================================================================
              C/C++ Test Unit Test Results
=============================================================================

TestSuite_<FunctionName>
  [passed] test_<function>_<scenario>
  [... more tests ...]
  Result: PASSED (N/N tests)

=============================================================================
Total Tests: <N> | Passed: <N> | Failed: 0 | Coverage: 100%
=============================================================================
```

---

## Troubleshooting

### Issue: "cpptest.h not found"
**Solution:** Add the Parasoft include path.
```bash
-I/path/to/parasoft/cpptest/include
```

### Issue: Tests not linking
**Solution:** Link against the cpptest library.
```bash
-L/path/to/parasoft/lib -lcpptest
```

### Issue: Stub values not working
**Solution:** Ensure stubs are registered before the function call.
```c
CPPTEST_REGISTER_STUB_VALUE("func", value);  // Before
int result = func();                          // After
```

### Issue: State not resetting between tests
**Solution:** Use `setUp()` / `tearDown()` fixtures to reset module state.
```c
void setUp(void) {
    /* Reset module state */
    FanDriver_Off();
    AlarmManager_Clear();
}
```

---

## Next Steps After a Test Run

1. Review results in the coverage report; investigate any uncovered lines (target: 0 with a well-designed suite).
2. Integrate into CI/CD:
   ```bash
   cpptestcli -data . -config default -execute -report coverage
   ```
3. Monitor coverage trends over time and update tests when source code changes.

## Related Skills
- `parasoft-unit-testing` — full assertion/stub macro reference and test suite structure.
- [Suite-generation report template](../parasoft-create-test-suite/references/unit-test-generation-report.md) — template for documenting a group of per-function suites.
- `mcdc-test-coverage-guide` — how to go from line coverage to MC/DC coverage.
