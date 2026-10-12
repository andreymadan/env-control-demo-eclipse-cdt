---
name: mcdc-quick-reference
description: 'Quick-reference checklist and test-count summary format for reporting an MC/DC (Modified Condition/Decision Coverage) test enhancement on a C module tested with Parasoft C/C++Test: test distribution by function, stub callback list, MC/DC test categories, and a quality-assurance checklist. Use for a fast at-a-glance status card after enhancing a test suite to MC/DC coverage.'
---

# MC/DC Enhancement - Quick Reference Card

**Framework:** Parasoft C/C++Test Professional v2026.1

This is a template/example quick-reference card, worked for `TestSuite_actuator_manager_c.c`. Reuse this structure when summarizing an MC/DC enhancement for any C module.

---

## Test Count Summary

```
ORIGINAL TESTS: 12
+ MC/DC TESTS: 10
----------------------
= TOTAL TESTS: 22

Coverage Level: MC/DC
Lines Covered: 50/50 (100%)
Branches: 100%
Conditions: Independent (MC/DC)
```

---

## Test Distribution by Function (example)

### ActuatorManager_StartFan()
- Test 1: Success path (HeaterDriver_Off=0, FanDriver_On=0)
- Test 2: Failure path (HeaterDriver_Off=-1)
- **Test 18 [MC/DC]**: FanDriver_On failure path (independent return)

### ActuatorManager_StopFan()
- Test 3: Simple function call

### ActuatorManager_StartHeater()
- Test 4: Success path (FanDriver_Off=0, HeaterDriver_On=0)
- Test 5: Failure path (FanDriver_Off=-1)
- **Test 19 [MC/DC]**: HeaterDriver_On failure path (independent return)

### ActuatorManager_StopHeater()
- Test 6: Simple function call

### ActuatorManager_StopAll()
- Test 7: Both succeed (T,T) -> 0
- Test 8: Fan fails (F,T) -> -1
- Test 9: Heater fails (T,F) -> -1
- Test 10: Both fail (F,F) -> -1
- **Test 13 [MC/DC]**: Fan non-zero detection
- **Test 21 [MC/DC]**: Fan positive error code
- **Test 22 [MC/DC]**: AND operator evaluation

### ActuatorManager_CanStartFan()
- Test 11: Cooldown expired (elapsed > threshold)
- Test 12: Cooldown active (elapsed < threshold)
- **Test 14 [MC/DC]**: Exact boundary (elapsed = threshold)
- **Test 15 [MC/DC]**: Just below boundary (elapsed = threshold - 1)
- **Test 16 [MC/DC]**: Zero cooldown (edge case)
- **Test 17 [MC/DC]**: Large cooldown (magnitude test)
- **Test 20 [MC/DC]**: Zero elapsed time (now = lastStopTime)

---

## New Stub Callbacks Added (example)

| Callback | Return | Purpose |
|----------|--------|---------|
| HeaterDriver_On_Failure | -1 | Test independent return paths |
| FanDriver_On_Failure | -1 | Test independent return paths |

---

## MC/DC Test Categories

### Boundary Value Tests (5)
- Exact equality boundary (==)
- Just below boundary (-1)
- Large magnitude test
- Zero cooldown edge case
- Zero elapsed time

### Independent Path Tests (2)
- Return value independent of a preceding condition's success
- Second condition's return value propagated, not masked

### AND Operator Evaluation (3)
- First condition affects outcome (any non-zero)
- Second condition is evaluated (doesn't short-circuit)
- All 4 combinations of (T/F, T/F) covered

---

## Key MC/DC Principles

### 1. Condition Independence
Each condition can change outcome independently; verify return values matter regardless of the order of evaluation.

### 2. Boundary Coverage
`>=` operator tested at exact boundary, just below boundary, and well above.

### 3. Short-Circuit Prevention
`&&`/`||` operators require both conditions evaluated; verify second condition isn't skipped.

### 4. Error Value Diversity
Use negative and non-specific error codes, not just 0/1, so tests verify "non-zero detection" rather than one magic value.

### 5. Edge Cases
Zero values, boundary values, and large magnitudes should all be tested.

---

## File Statistics Template

| Component | Count |
|-----------|-------|
| Total Lines | (fill in) |
| Test Cases | (fill in) |
| Stub Callbacks | (fill in) |
| Source Lines Covered | (fill in) |
| Decisions Covered | (fill in) |
| Conditions Covered | (fill in) |

---

## Execution Command

```bash
# Run the complete test suite
cpptestcli -data <project_data_dir> -config default -execute

# Generate coverage report
cpptestcli -data <project_data_dir> -config default \
  -report coverage -format html
```

---

## Quality Assurance Checklist

- [ ] All MC/DC test cases implemented
- [ ] All stubs configured with callbacks
- [ ] All forward declarations added
- [ ] All test registrations updated
- [ ] 100% line coverage maintained
- [ ] 100% branch coverage maintained
- [ ] MC/DC coverage achieved (independent conditions)
- [ ] Boundary values tested
- [ ] Edge cases covered
- [ ] Dynamic stub callbacks used (best practice)

---

## Quick Stats Template

```
Coverage Achievement:
  Line Coverage:    ___% (___/___ lines)
  Branch Coverage:  ___% (all paths)
  MC/DC Coverage:   ___% (independent conditions)

Test Achievement:
  Total Tests:      ___
  Basic Coverage:   ___ tests
  MC/DC Coverage:   ___ tests

Quality Standard:
  DO-178C (Avionics):      MC/DC
  ISO 26262 (Automotive):  MC/DC
  IEC 62304 (Medical):     MC/DC
```
