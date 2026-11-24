# Task 6: Callbacks and Lambda Expressions

## Objective

1. Implement function `filter_above_threshold(const std::vector<int>& data, int threshold)`:
   - Uses a lambda expression capturing `threshold` by value
   - Returns a new vector with elements strictly greater than `threshold`

2. Implement class `EventDispatcher`:
   - Method `void subscribe(std::function<void(int)> callback)` registers a callback
   - Method `void emit(int eventCode) const` calls all registered callbacks in registration order

## Implementation Requirements

- Use lambda expressions with appropriate capture semantics
- Use `std::function` for callback type erasure
- Store callbacks and invoke them in correct order
- Handle callback safety (null check)

## Evaluation Criteria (0-3 points)

- **0 points:** Syntax errors in lambdas or dangling references
- **1 point:** Working filtering, but no `std::function` support
- **2 points:** Correct implementation of both requirements
- **3 points:** Clean, idiomatic code with safe callback invocation (checking `if (cb)`)
