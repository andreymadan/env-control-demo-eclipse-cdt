---
name: parasoft-create-empty-test
description: "Create a minimal, registered Parasoft C/C++Test test case scaffold for a specified C function without inventing test behavior. Use when asked for an empty test, test-case stub, or initial test skeleton."
---

# Create an Empty Parasoft Test Case

## Workflow

1. Confirm the requested function and source file. Read its declaration and the nearest existing suite to follow project naming, include, context, and registration conventions.
2. Check the active Test Configuration and the [Parasoft unit testing guide](../parasoft-unit-testing/Skill.md) for the suite discovery path and suite structure. Put the new case in the matching test suite location; do not create a duplicate test or suite.
3. Add only the test-suite registration and a clearly named test function skeleton. Keep setup, action, and assertion areas as TODO placeholders if the user requested an empty case; do not guess expected values or add behavior.
4. If a suite is needed, use the repository's `CPPTEST_CONTEXT`, `CPPTEST_TEST_SUITE_INCLUDED_TO`, suite definition, and registration pattern from nearby suites.
5. Summarize the created file and what remains intentionally unimplemented. Do not claim the test passes unless it has been run.

## Boundaries

- Preserve existing test cases, fixtures, and user-edited generated code.
- Do not modify production source just to make the scaffold compile.
- When the user asks to run tests, follow the [execution guide](../parasoft-test-execution-guide/Skill.md); otherwise avoid execution that can generate files or reports.
