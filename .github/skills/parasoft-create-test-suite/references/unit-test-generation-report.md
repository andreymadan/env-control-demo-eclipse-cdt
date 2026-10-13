---
name: unit-test-generation-report
description: 'Template for reporting Parasoft C/C++Test suites that follow the project convention of one TestSuite_<FunctionName>.c per function under tests/<source_dir>/<module>_tests/. Includes per-suite test cases, stubs, and coverage summaries.'
---

# Parasoft Per-Function Test Suite Report Template

**Framework:** Parasoft Unit Testing Framework
**Coverage Target:** 100% Line Coverage

Use this template to report a batch of written unit tests. A source module can have multiple suites, but each suite tests exactly one function and is saved under `tests/<source_dir>/<module>_tests/`, following the [project naming convention](../../parasoft-unit-testing/Skill.md#one-function-per-testsuite-naming-convention).

---

## Executive Summary

State what was generated and the goal, e.g.:
"This report documents the per-function test suites for the provided source files. Suites exercise the selected function's behavior and use stubs for external dependencies where needed."

---

## Per-Suite Section Template

For each per-function test suite, document:

```
### N. **TestSuite_<FunctionName>.c**
**Source File:** `<path>` (<N> lines)
**Function Under Test:** `<FunctionName>()`
**Location:** `tests/<source_dir>/<module>_tests/TestSuite_<FunctionName>.c`
**Total Tests:** <N>

#### Test Cases:

| Test Name | Purpose | Coverage |
|-----------|---------|----------|
| `test_Function_success` | ... | Line X-Y: ... |
| `test_Function_failure` | ... | Line X-Y: ... |

#### Stubs Used:
- `Dependency_Func()` - Returns configurable success/failure codes

**Coverage:** 100% (N/N lines)
```

### Worked Example — ActuatorManager (illustrative tests across per-function suites)

Split these example tests among separate files under `tests/src/actuator_manager_tests/`: `TestSuite_ActuatorManager_StartFan.c`, `TestSuite_ActuatorManager_StopFan.c`, `TestSuite_ActuatorManager_StartHeater.c`, `TestSuite_ActuatorManager_StopHeater.c`, `TestSuite_ActuatorManager_StopAll.c`, and `TestSuite_ActuatorManager_CanStartFan.c`. Each file contains tests for only its named function.

| Test Name | Purpose | Coverage |
|-----------|---------|----------|
| `test_ActuatorManager_StartFan_success` | HeaterDriver_Off succeeds, FanDriver_On succeeds | Success path |
| `test_ActuatorManager_StartFan_heater_off_fails` | HeaterDriver_Off returns -1 | Failure branch |
| `test_ActuatorManager_StopFan_success` | Calls FanDriver_Off | Complete function |
| `test_ActuatorManager_StartHeater_success` | FanDriver_Off succeeds, HeaterDriver_On succeeds | Success path |
| `test_ActuatorManager_StartHeater_fan_off_fails` | FanDriver_Off returns -1 | Failure branch |
| `test_ActuatorManager_StopHeater_success` | Calls HeaterDriver_Off | Complete function |
| `test_ActuatorManager_StopAll_both_success` | Both drivers return 0 | Success condition |
| `test_ActuatorManager_StopAll_fan_fails` | FanDriver_Off fails | Failure detection |
| `test_ActuatorManager_StopAll_heater_fails` | HeaterDriver_Off fails | Failure detection |
| `test_ActuatorManager_StopAll_both_fail` | Both drivers fail | Failure detection |
| `test_ActuatorManager_CanStartFan_cooldown_expired` | Cooldown time has elapsed | True condition |
| `test_ActuatorManager_CanStartFan_cooldown_active` | Cooldown time still active | False condition |

Stubs used: `HeaterDriver_Off()`, `FanDriver_On()`, `FanDriver_Off()`, `Clock_GetSeconds()`.

### Worked Example — AlarmManager (illustrative cases across per-function suites)

Split the cases into `TestSuite_AlarmManager_Activate.c`, `TestSuite_AlarmManager_Clear.c`, and `TestSuite_AlarmManager_GetActiveAlarm.c` under `tests/src/alarm_manager_tests/`. Cover `AlarmManager_Activate()` (one case per enum alarm type), `AlarmManager_Clear()`, and `AlarmManager_GetActiveAlarm()` (initial, after activate, and after clear). Stub display/buzzer/logger driver calls as no-ops.

### Worked Example — Controller (illustrative cases across per-function suites)

Split these cases into `TestSuite_Controller_Init.c`, `TestSuite_Controller_GetState.c`, and `TestSuite_Controller_RunCycle.c` under `tests/src/controller_tests/`. Keep each test file focused on its named function. For `Controller_RunCycle()`, cover every branch: null controller, sensor read failure, invalid temperature (including exceeding the failure limit to trigger an alarm), temperature too high/low, cooling allowed/blocked, humidity invalid/too high, and the COOLING -> IDLE state transition. Stub `SensorManager_Read()`, `ActuatorManager_*()`, `AlarmManager_*()`, and `Clock_GetSeconds()` as needed.

### Worked Example — FanDriver (illustrative cases across per-function suites)

Split tests for `FanDriver_On()`, `FanDriver_Off()`, and `FanDriver_IsOn()` into `TestSuite_FanDriver_On.c`, `TestSuite_FanDriver_Off.c`, and `TestSuite_FanDriver_IsOn.c` under `tests/drivers/fan_driver_tests/`. These direct driver tests need no external stubs; use each suite's setup/teardown to force the fan OFF before/after its tests where appropriate.

### Worked Example — driver.c functions (illustrative cases across per-function suites)

Split tests for `print_menu_get_action()`, `main_loop()`, and `main()` into separate `TestSuite_<FunctionName>.c` files under the matching `tests/<source_dir>/<module>_tests/` directory. Cover every `main_loop()` switch case (add/delete/list/display/exit/default-invalid) in its suite and test `main()`'s init/loop/uninit sequence in its own suite. Stub I/O (`print_string`, `get_input_digit`) and timer functions as needed.

---

## Coverage Summary Table Template

| Source File | Function Under Test | Test Suite Path | Tests | Coverage |
|-----------|--------------------|-----------------|-------|----------|
| (file 1) | (one function) | `tests/<source_dir>/<module>_tests/TestSuite_<FunctionName>.c` | | |
| (file 2) | (one function) | `tests/<source_dir>/<module>_tests/TestSuite_<FunctionName>.c` | | |
| **TOTAL** | | | | |

---

## Testing Strategy Checklist

### 1. Boundary Testing
- NULL pointer checks
- Min/max values using `cpptestLimitsGetMaxInt()` / `cpptestLimitsGetMinInt()`

### 2. State Testing
- State transitions (e.g., IDLE -> HEATING -> COOLING)
- Multiple enum/alarm types
- On/Off state verification

### 3. Condition Testing
- All conditional branches covered
- All switch cases tested
- All error paths validated

### 4. Stub Usage
- External dependencies stubbed
- Return values configured per test scenario
- I/O functions completely stubbed

### 5. Fixture Management
- `testSuiteSetUp()` / `testSuiteTearDown()` - suite-level initialization
- `setUp()` / `tearDown()` - test-case-level initialization

---

## Key Testing Patterns

### Pattern 1: Success/Failure Path Testing
```c
/* Test success path */
CPPTEST_REGISTER_STUB_VALUE("HeaterDriver_Off", 0);
CPPTEST_REGISTER_STUB_VALUE("FanDriver_On", 0);
int result = ActuatorManager_StartFan();
CPPTEST_ASSERT_INTEGER_EQUAL(0, result);

/* Test failure path */
CPPTEST_REGISTER_STUB_VALUE("HeaterDriver_Off", -1);
result = ActuatorManager_StartFan();
CPPTEST_ASSERT_INTEGER_EQUAL(-1, result);
```

### Pattern 2: State Verification
```c
/* Verify state changes */
Controller controller;
Controller_Init(&controller, &config);
CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_IDLE, controller.state);

Controller_RunCycle(&controller);
CPPTEST_ASSERT_ENUM_EQUAL(SystemState, SYSTEM_HEATING, controller.state);
```

### Pattern 3: NULL Pointer Handling
```c
/* Test NULL cases don't crash */
Controller_Init(NULL, &config);       /* Safe */
Controller_Init(&controller, NULL);   /* Safe */
Controller_GetState(NULL);            /* Returns SYSTEM_ALARM */
```

### Pattern 4: Multiple Enum Values
```c
/* Test all enum variants */
AlarmManager_Activate(ALARM_SENSOR_FAILURE);
AlarmManager_Activate(ALARM_OVER_TEMPERATURE);
AlarmManager_Activate(ALARM_HIGH_HUMIDITY);
AlarmManager_Activate(ALARM_ENVIRONMENT);
```

---

## Assert Macros Usage Table Template

| Macro | Usage | Count |
|-------|-------|-------|
| `CPPTEST_ASSERT_INTEGER_EQUAL` | Integer value comparison | |
| `CPPTEST_ASSERT_ENUM_EQUAL` | Enum comparison | |
| `CPPTEST_ASSERT` | Boolean, relational, and NULL checks | |
| `CPPTEST_ASSERT_PTR_EQUAL` | Pointer comparison | |
| `CPPTEST_ASSERT_FLOAT_EQUAL_DELTA` | Floating-point comparison | |

(See the `parasoft-unit-testing` skill for the full assertion macro reference.)

---

## Notes on Test Design

### Limitations to Acknowledge
1. Infinite-loop entry points (e.g. `main_loop()`) — tests focus on one iteration / function calls rather than the loop itself.
2. Static/module-level variables — limited ability to reset module state between tests without dedicated reset hooks.
3. Complex structs — may require configuration helpers for initialization.

### Strengths to Call Out
1. 100% line coverage achieved across all files.
2. All branches tested (if/else, switch cases, loops).
3. Error paths validated with stub configuration.
4. State transitions verified for state machines.
5. NULL safety confirmed for all pointer parameters.

---

## How to Run the Tests

```bash
cpptestcli -data [workspace] -config [config_file] -execute
cpptestcli -data [workspace] -config [config_file] -report coverage -format html
```

Or in Eclipse: right-click the test suite -> Run As -> C/C++Test Test, then view results in the C/C++Test Report / Coverage views.
