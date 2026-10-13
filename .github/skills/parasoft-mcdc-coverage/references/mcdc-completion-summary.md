---
name: mcdc-completion-summary
description: 'Template for writing a completion/summary report after finishing an MC/DC (Modified Condition/Decision Coverage) test enhancement on a C module with Parasoft C/C++Test, including coverage progression table, compliance mapping to DO-178C/ISO 26262/IEC 62304, and a quality metrics summary. Use when documenting the final results of an MC/DC coverage effort for review or sign-off.'
---

# MC/DC Enhancement Completion - Summary Report Template

**Framework:** Parasoft C/C++Test Professional v2026.1

This is a worked example for an MC/DC enhancement across ActuatorManager's per-function suites under `tests/src/actuator_manager_tests/`. Reuse the sections and tables below, replacing the specific numbers/names; keep each function in its own suite.

---

## Executive Summary

State what was enhanced and the overall outcome, e.g.:
"Successfully enhanced the per-function TestSuite_<FunctionName>.c suite(s) with N additional test cases to achieve the requested MC/DC (Modified Condition/Decision Coverage) level."

### Coverage Progression

| Level | Tests | Achievement |
|-------|-------|-------------|
| Statement Coverage (SC) | 12 | 100% |
| Branch Coverage (BC) | 12 | 100% |
| Decision Coverage (DC) | 12 | 100% |
| **MC/DC Coverage** | **22** | **100%** |

---

## What Was Added

List each new test with its target function and MC/DC focus, e.g.:

| # | Test Name | Function | Focus |
|---|-----------|----------|-------|
| 13 | test_..._fan_fails_alternate | StopAll | Non-zero detection |
| 14 | test_..._exact_boundary | CanStartFan | Boundary: equal |
| 15 | test_..._just_below_boundary | CanStartFan | Boundary: just below |
| 18 | test_..._fan_on_fails | StartFan | Return value path independence |
| 21 | test_..._fan_positive_error | StopAll | Positive error code |
| 22 | test_..._heater_positive_error | StopAll | AND operator evaluation |

List any new stub callbacks added to support the new tests.

---

## Key MC/DC Improvements

### 1. Independent Condition Analysis
Explain which tests prove the return value from a second dependent call is independent of the first call's result.

### 2. Boundary Value Testing
List the boundary tests and what `>=`/`<=`/`==` edge each one covers (exact boundary, just below, well above, zero).

### 3. AND/OR Operator Independence
Show the full truth table for each compound condition and which test covers each row:

```
condA | condB | Result
  T   |   T   |  ...   (Test N)
  T   |   F   |  ...   (Test N)
  F   |   T   |  ...   (Test N)
  F   |   F   |  ...   (Test N)
```

---

## Code Coverage Metrics Template

```
Lines:        __/__ (100%)
Branches:     100% (all paths)
Functions:    __/__ (100%)
Decisions:    __/__ (100%)
Conditions:   __/__ (100%)
MC/DC:        100%
```

### Coverage by Function Template

| Function | Lines | Branches | Tests | MC/DC |
|----------|-------|----------|-------|-------|
| (fn 1) | | | | |
| (fn 2) | | | | |
| **TOTAL** | | | | |

---

## Test Execution Results Template

```
================================================
TestSuite_<FunctionName>
================================================

BASIC COVERAGE TESTS
[list]

MC/DC ENHANCEMENT TESTS
[list, marked with [MC/DC]]

================================================
Result: PASSED (N/N tests)
Line Coverage: 100%
Branch Coverage: 100%
MC/DC Coverage: 100%
================================================
```

---

## MC/DC Test Techniques Employed

1. **Boundary Value Analysis** — equal to threshold, just below, well above/below.
2. **Independent Clause Evaluation** — each condition tested to affect the outcome independently.
3. **Compound Condition Testing** — all T/F combinations for AND/OR operators.
4. **Error Path Diversity** — different, non-magic error codes (not just 0/1).
5. **Edge Case Coverage** — zero values, boundary values, maximum values.

---

## Coverage Compliance Mapping

| Standard | Required | Achieved | Status |
|----------|----------|----------|--------|
| MISRA-C | Statement + Branch | MC/DC | Exceeds |
| DO-178C (Avionics) | MC/DC for Level A | MC/DC | Meets |
| IEC 62304 (Medical) | Branch Coverage | MC/DC | Exceeds |
| ISO 26262 (Automotive) | MC/DC for ASIL D | MC/DC | Meets |

---

## Quality Metrics Summary Template

| Metric | Target | Achieved | Margin |
|--------|--------|----------|--------|
| Line Coverage | >90% | 100% | +10% |
| Branch Coverage | >80% | 100% | +20% |
| MC/DC Coverage | >75% | 100% | +25% |
| Test Count | >3 per function | (fill in) | |
| Boundary Cases | >5 | (fill in) | |
| Error Scenarios | >3 per function | (fill in) | |

---

## Next Steps Template

1. Compile and run the full enhanced test suite; confirm all tests pass.
2. Review the generated coverage report (HTML/XML) and verify MC/DC metrics.
3. Integrate into CI/CD with coverage thresholds and notifications.

```bash
cpptestcli -data <project_dir> -config default -execute
cpptestcli -data <project_dir> -config default -report coverage -format html
```
