# Task 3: STL Container Selection

Implement an event catalog with operations to append events, process the oldest pending event, find an event by ID, and return a snapshot ordered by ID. Choose containers based on the workload and explain the trade-offs against `vector`, `deque`, `list`, and associative containers. Do not rely on wall-clock benchmarks.

## Scoring (0-3 points)

* **0:** Core operations are incorrect.
* **1:** Operations work, but lookup or processing has avoidable linear behavior.
* **2:** Correct results and container choices suit the stated workload.
* **3:** Correct edge cases, clear complexity/iterator-stability rationale, and no timing-dependent claims.
