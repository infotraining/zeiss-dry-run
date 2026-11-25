# Task 11: RAII – Resource Management and Exception Safety

## Objective

Implement class `ScopeFlagGuard` implementing the RAII pattern:

1. Constructor `explicit ScopeFlagGuard(bool& flag)` sets `flag` to `true`
2. Destructor restores `flag` to `false` (even when exiting scope via exception!)
3. Block copying and moving of the class (use `= delete`)
4. Implement function `void execute_with_guard(bool& activeFlag, bool shouldThrow)`:
   - Creates a local `ScopeFlagGuard` object
   - If `shouldThrow == true`, throws `std::runtime_error("Failure")`

## Implementation Requirements

- Implement RAII pattern correctly
- Ensure destructor is always called (exception safety)
- Use `= delete` to prevent copying and moving
- Provide strong exception guarantee where applicable

## Evaluation Criteria (0-3 points)

- **0 points:** Flag remains `true` after throwing an exception
- **1 point:** Works on normal exit, but missing copy/move blocking (`= delete`)
- **2 points:** Correct RAII and copy/move blocking
- **3 points:** Clean, idiomatic implementation following exception safety principles
