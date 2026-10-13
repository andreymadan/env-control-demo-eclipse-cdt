---
name: parasoft-create-test-suite
description: "Create a Parasoft C/C++Test suite for a C source file, with registered test cases for its relevant functions and project-compatible stubs. Use when asked for a new suite for a file or module."
---

# Create a Parasoft Test Suite for a File

## Workflow

1. Inspect the target source file, its headers, the active Test Configuration, and existing suites. Enumerate functions in scope and note global state, dependencies, and observable outputs.
2. Confirm the suite output/discovery pattern and naming convention using the [unit testing guide](../parasoft-unit-testing/Skill.md). Create or extend the right suite; do not place it where the configured runner cannot discover it.
3. Build a test matrix across functions: success and failure outcomes, conditional branches, state transitions, null/invalid inputs where supported, and boundary cases. Keep tests independent and reset state with existing fixtures.
4. Reuse existing stub definitions. Add a new stub only when necessary and use the project's separate stub-dispatcher and suite-callback pattern.
5. Register all test functions in the suite and use type-appropriate assertions. Keep the suite scoped to the requested source file and avoid unrelated production edits.
6. If a generation report is requested, use the [suite-generation report template](./references/unit-test-generation-report.md). Treat embedded numbers and examples as examples; report only verified results for the current suite.

## Completion

Summarize the suite path, functions and scenarios covered, stub dependencies, and validation results. Do not describe generated cases as passing unless execution confirms it.
