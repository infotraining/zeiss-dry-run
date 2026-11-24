# Task 9: Composite and Prototype

Implement a tree of work items. A leaf stores its own effort; a group owns child work items and reports their combined effort. Every item supports `clone()`, and cloning a group must deeply clone its descendants.

Use RAII ownership and support nested groups, including empty groups.

## Scoring (0-3 points)

* **0:** Incorrect aggregation, unsafe ownership, or does not compile.
* **1:** Leaves work, but nested groups or cloning are incomplete.
* **2:** Nested aggregation and deep cloning work.
* **3:** Clone independence and ownership edge cases are handled cleanly.
