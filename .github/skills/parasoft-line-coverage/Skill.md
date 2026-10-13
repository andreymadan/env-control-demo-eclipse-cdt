---
name: parasoft-line-coverage
description: "Improve Parasoft C/C++Test unit tests toward a requested line-coverage target, including full line coverage. Use when asked to analyze coverage gaps and generate or add tests to cover uncovered executable lines."
---

# Improve Line Coverage with Parasoft

## Workflow

1. Determine the target source file(s), test configuration, current suite(s), and requested line-coverage threshold.
2. Inspect the source and existing tests, then obtain a baseline coverage result using the project's configured Parasoft workflow when execution is authorized. Identify uncovered lines from the report, not from guesswork.
3. For each uncovered executable line, determine the input, state, or stub outcome that reaches it. Add the smallest set of independent, behavior-valid test cases to existing suites, following the [unit testing guide](../parasoft-unit-testing/Skill.md).
4. Re-run the focused coverage workflow and compare achieved line coverage with the requested threshold. Iterate on remaining uncovered lines; distinguish unreachable or non-executable lines from missing test scenarios in the report.
5. Report baseline and final line coverage, test cases added, residual gaps, and execution/report locations. Never claim a percentage without evidence from the coverage report.

## Constraints

- Preserve existing suites and user-authored test content.
- Do not weaken assertions or alter production code merely to improve a metric.
- To pursue MC/DC rather than line coverage, use [MC/DC coverage](../parasoft-mcdc-coverage/Skill.md).
- Follow the [execution guide](../parasoft-test-execution-guide/Skill.md) for the project runner and side effects.
