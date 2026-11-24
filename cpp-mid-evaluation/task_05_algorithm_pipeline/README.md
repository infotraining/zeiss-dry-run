# Task 5: Standard Algorithm Pipeline

Implement `find_item_by_id` and `build_report`. The report includes items at or above a score threshold, ordered by score descending and then ID ascending, with each item converted to a text line. Use standard algorithms and lambdas rather than hand-written loops where appropriate.

An implementation using parallel execution policies is an optional extension; correctness and scoring do not depend on parallel speedup.

## Scoring (0-3 points)

* **0:** Incorrect results or does not compile.
* **1:** Basic filtering works, but ordering or lookup is wrong.
* **2:** Correct results using appropriate standard algorithms.
* **3:** Clear, composable pipeline and robust empty/tie behavior; optional parallel extension is correct if attempted.
