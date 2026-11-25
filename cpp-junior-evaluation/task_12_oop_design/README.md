# Task 12: Object-Oriented Programming (Encapsulation and Composition)

## Objective

1. **Encapsulation and Invariants:** Implement class `SimpleDate(int day, int month, int year)`:
   - Validate date correctness in constructor and method `set_month(int month)`: `year >= 1900`, `1 <= month <= 12`, `1 <= day <= 31`
   - Throw `std::invalid_argument` on error without changing object state
   - Use private fields and public methods for validation

2. **Dependency Mocking:** Write a unit test verifying that `NotificationService.send_alert()` calls the `log()` method on the passed logger with appropriate message

## Implementation Requirements

- Use proper encapsulation with private fields
- Validate invariants before state changes
- Provide strong exception guarantee
- Use composition instead of inheritance
- Apply dependency injection pattern

## Evaluation Criteria (0-3 points)

- **0 points:** Public fields without validation or inheritance instead of composition
- **1 point:** Validation only in constructor, missing validation in `set_month()`
- **2 points:** Correct encapsulation and dependency injection through interface
- **3 points:** Complete invariant protection (strong exception guarantee) and clean composition
