---
name: parasoft-mcdc-coverage
description: "Analyze and improve Parasoft C/C++Test suites for Modified Condition/Decision Coverage (MC/DC), including independent condition pairs, compound decisions, and measured coverage gaps. Use when asked to achieve or assess MC/DC."
---

# Improve MC/DC Coverage with Parasoft

## Workflow

1. Inspect the target source and existing tests. List each decision, atomic condition, and relevant short-circuit expression. Use the [MC/DC coverage guide](../mcdc-test-coverage-guide/Skill.md) for the condition-independence method.
2. Obtain baseline Parasoft MC/DC results when execution is authorized. Map uncovered conditions to decisions and candidate inputs or stub outcomes.
3. For each condition, create a pair of tests where that condition changes value while the other conditions are held fixed, and the decision outcome changes. Add rows to a truth table for compound decisions and verify that tests are feasible.
4. Add boundary and error-value tests where they exercise actual source conditions. Use valid values and existing stubs; do not claim MC/DC from broad line or branch coverage alone.
5. Re-run the focused Parasoft workflow, review the MC/DC report, and iterate until the requested target is demonstrated or remaining conditions are infeasible/unreachable.
6. Summarize per-decision condition pairs, test cases added, baseline/final line and MC/DC metrics, residual gaps, and validation evidence.

## Completion Templates

- Use the [MC/DC quick reference](./references/mcdc-quick-reference.md) for a concise test distribution, callback list, test category, and QA checklist.
- Use the [MC/DC completion summary](./references/mcdc-completion-summary.md) for a detailed coverage progression and outcome report.
- These files contain worked examples as well as templates. Replace example names and numbers, and do not report example coverage or compliance as achieved without project evidence.
