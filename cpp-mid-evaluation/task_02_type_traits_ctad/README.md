# Task 2: Type Traits and CTAD

1. Implement a trait `is_supported_value` that detects whether a type is supported. Supported types include arithmetic types and `std::string`.
2. Implement a `ValueBox<T>` that stores a value of type `T`. Use CTAD (Class Template Argument Deduction) to deduce the type from the constructor arguments.
3. Implement a `format_value` function that formats arithmetic and text values appropriately. Use `if constexpr` to handle different types at compile time.

Unsupported types should be rejected at compile time. Keep that contract clear in the public API.

## Scoring (0-3 points)

* **0:** Does not compile or incorrectly handles supported types.
* **1:** Formatting works for one category but type deduction or compile-time dispatch is missing.
* **2:** Custom trait and CTAD work for the supported types.
* **3:** Correct cv/ref-aware trait behavior, string-literal deduction, and clear compile-time rejection of unsupported types.
