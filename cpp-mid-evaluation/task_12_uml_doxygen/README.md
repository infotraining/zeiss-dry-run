# Task 12: UML and Doxygen

Document the workflow API and its lifecycle. Add Doxygen comments to the public API, a class diagram, and a state or sequence diagram that agrees with the implementation. Store diagrams in `docs/design.md` as Mermaid source so they can be reviewed without extra tooling. The reference diagrams are in `docs/design_solution.md`.

If Doxygen is installed, generate the API documentation using the supplied `Doxyfile`. Documentation is assessed by review; the C++ state transitions are covered by Google Tests.

## Scoring (0-3 points)

* **0:** Missing or contradictory documentation.
* **1:** API comments or one diagram is present, but key behavior is unclear.
* **2:** Doxygen comments and both diagrams describe the lifecycle correctly.
* **3:** Clear public contracts, accurate diagrams, and successful Doxygen generation where available.

The reference solution (`task_12_solution.hpp`) uses Doxygen commands (`\file`, `\brief`, `\retval`, `\pre`/`\post`, `\code`, `\dot`, `\msc`). Generate it with `doxygen Doxyfile.solution`.

The solution's `\dot` diagram requires Graphviz (`dot`) on `PATH`. Its `\msc` diagram uses Doxygen's built-in renderer; no external `mscgen` is required. Run Doxygen from the task directory.
