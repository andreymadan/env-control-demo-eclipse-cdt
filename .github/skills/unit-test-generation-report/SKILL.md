---
name: unit-test-generation-report
description: 'Template and worked example for reporting a comprehensive Parasoft C/C++Test unit test suite generation effort: per-file test case tables, stub usage, coverage summary table, and key testing patterns (success/failure path, state verification, NULL pointer handling, multi-enum testing). Use when writing a report after auto-generating or hand-writing unit tests to document coverage, test counts, and stubbing strategy for a set of C source files. For where to physically place new TestSuite files, see the parasoft-unit-testing skill.'
---

# Comprehensive Unit Test Suite Generation Report Template

**Framework:** Parasoft Unit Testing Framework
**Coverage Target:** 100% Line Coverage

This is a worked example (for the `env-control-demo-eclipse-cdt` project) of the structure to use when reporting a batch of generated/written unit test suites. Reuse the sections and tables below for new modules.

---

## Executive Summary

State what was generated and the goal, e.g.:
"This report documents all comprehensive unit test suites generated for the provided source files. Each test suite is designed to achieve 100% line coverage while using stubs for external dependencies."

---

## Per-Suite Section Template

For each generated test suite, document:

```
### N. **TestSuite_<module>_comprehensive.c**
**Source File:** `<path>` (<N> lines)
**Location:** `<path to generated test file>`
**Total Tests:** <N>

#### Functions Tested:
- `Function1()`
- `Function2()`

#### Test Cases:

| Test Name | Purpose | Coverage |
|-----------|---------|----------|
| `test_Function_success` | ... | Line X-Y: ... |
| `test_Function_failure` | ... | Line X-Y: ... |

#### Stubs Used:
- `Dependency_Func()` - Returns configurable success/failure codes

**Coverage:** 100% (N/N lines)
```

### Worked Example — ActuatorManager (12 tests, 50 lines, 100%)

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

### Worked Example — AlarmManager (8 tests, 27 lines, 100%)

Covers `AlarmManager_Activate()` (one test per enum alarm type: `ALARM_SENSOR_FAILURE`, `ALARM_OVER_TEMPERATURE`, `ALARM_HIGH_HUMIDITY`, `ALARM_ENVIRONMENT`), `AlarmManager_Clear()`, and `AlarmManager_GetActiveAlarm()` (initial, after activate, after clear). All display/buzzer/logger driver calls stubbed as no-ops.

### Worked Example — Controller (18 tests, 109 lines, 100%)

Covers `Controller_Init()` (valid params, NULL controller, NULL config, both NULL), `Controller_GetState()` (valid and NULL controller), and `Controller_RunCycle()` across every branch: NULL controller, sensor read failure, invalid temperature (including exceeding the failure limit to trigger an alarm), temperature too high/low, cooling allowed/blocked, humidity invalid/too high, and the COOLING -> IDLE state transition. Stubs: `SensorManager_Read()`, `ActuatorManager_*()`, `AlarmManager_*()`, `Clock_GetSeconds()`.

### Worked Example — FanDriver (7 tests, 21 lines, 100%)

Direct driver with no external stubs; uses `testSuiteSetUp()`/`testSuiteTearDown()` to force the fan OFF before/after the suite. Covers `FanDriver_On()`, `FanDriver_Off()`, `FanDriver_IsOn()`, and both functions' return codes.

### Worked Example — driver.c / main_loop (10 tests, 77 lines, 100%)

Covers `print_menu_get_action()`, every `main_loop()` switch case (add/delete/list/display/exit/default-invalid), and `main()`'s init/loop/uninit sequence. All I/O (`print_string`, `get_input_digit`) and timer functions stubbed.

---

## Coverage Summary Table Template

| Source File | Lines | Test Suite | Tests | Coverage |
|-----------|-------|-----------|-------|----------|
| (file 1) | | | | |
| (file 2) | | | | |
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
| `CPPTEST_ASSERT_TRUE` / `FALSE` | Boolean assertions | |
| `CPPTEST_ASSERT_NOT_NULL` | Pointer validation | |
| `CPPTEST_ASSERT_NULL` | Null pointer verification | |
| `CPPTEST_POST_CONDITION_*` | Value inspection | |

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
