---
name: parasoft-update-tests-after-refactoring
description: "Analyze a C function refactor and update its existing Parasoft C/C++Test suite, test registrations, fixtures, and stub callbacks to match changed signatures or behavior. Use when tests need to be aligned with a refactored function."
---

# Update Tests After a Refactor

## Workflow

1. Compare the previous and current function behavior, signature, types, dependencies, and state changes. Read the existing test suite, fixtures, and stub definitions/callbacks before editing.
2. Map existing test cases to the new behavior. Identify obsolete assertions, changed expected outcomes, new branches, removed paths, renamed symbols, and callback signature changes.
3. Update the smallest relevant set of tests and suite registrations. Preserve the intent of still-valid cases and avoid deleting coverage for unchanged behavior.
4. Reconcile callback parameters and return types with the real declarations. Add a shared stub dispatcher only if one is actually missing, following the [unit testing guide](../parasoft-unit-testing/Skill.md).
5. Run the focused suite or coverage workflow only when authorized. Diagnose failures against the refactor and report any remaining mismatch instead of masking it.
6. Summarize test changes against the behavior changes and state the exact validation performed.

## Safety

- Do not modify production implementation as part of a test-only alignment request.
- Do not silently remove a test because it no longer compiles; determine whether its scenario needs replacement.
- If the refactor's intended behavior is unclear, ask before changing expected outcomes.
