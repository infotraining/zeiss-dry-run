# Task 4: Namespaces and Argument-Dependent Lookup

Implement a generic `mid::format` helper that calls an unqualified customization function. Provide a fallback for streamable values, then add a `format_value` overload in the namespace of a user-defined `Point` type. The library helper must discover the overload through ADL without adding a Point-specific overload to the library namespace.

## Scoring (0-3 points)

* **0:** Does not compile or formats values incorrectly.
* **1:** Custom formatting works only through a library-specific overload.
* **2:** ADL finds the user-defined customization and fallback formatting works.
* **3:** Correct lookup boundaries and explanation of ordinary lookup versus ADL.
