---
name: parasoft-generate-function-tests
description: "Generate or update Parasoft C/C++Test cases for one function after a code change, covering changed behavior and relevant failure, boundary, state, and dependency paths. Use when tests are requested for a changed or newly implemented function."
---

# Generate Tests for a Function

## Workflow

1. Identify the target function and its relevant source changes. Read the full function, its declarations/types, existing tests, nearby callers only when needed to understand observable behavior, and relevant stubs.
2. Turn the function's behavior into a compact scenario list: normal outcomes, each changed conditional outcome, error handling, boundary values, pointer/state behavior, and dependency results. Do not test implementation details that are not observable.
3. Extend the existing suite where possible. Use project suite naming and discovery rules in the [unit testing guide](../parasoft-unit-testing/Skill.md); avoid duplicating tests or overwriting manual edits.
4. For dependencies, check whether the user stub already exists before adding one. Keep dispatch stubs and test-specific callbacks in their established locations. Select assertions that match the returned type and verify state or output side effects when relevant.
5. Map each test to a scenario and to the changed behavior it protects. If a numeric coverage goal was specified, inspect the corresponding Parasoft coverage result rather than inferring coverage from test count.
6. Report what changed, the scenarios covered, any untested behavior or blocker, and the actual validation performed.

## Guidance

- For MC/DC objectives, use the [MC/DC coverage guide](../mcdc-test-coverage-guide/Skill.md) and pair tests to show each condition independently changes the decision outcome.
- For a whole source-file suite rather than a single function, use [create-test-suite](../parasoft-create-test-suite/Skill.md).
- For a source refactor that changes existing tests, use [update-tests-after-refactoring](../parasoft-update-tests-after-refactoring/Skill.md).
