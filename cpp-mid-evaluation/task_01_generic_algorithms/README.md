# Task 1: Generic Algorithms and Explicit Instantiation

1. Implement the `ValueSeries<T>` class template. The series stores values, supports appending, and exposes read-only access. 
   Explicitly instantiate the supported types (`int`, `double`, and `std::string`) in the `.cpp` file.
   
2. Implement the `filter_transform` function template. It selects values with a predicate and applies a transformation, returning std::vector of values of the transformation's result type.

Requirements:

* Support the explicitly instantiated `int`, `double`, and `std::string` series types.
* Keep the class-template implementation in the `.cpp` file and explicitly instantiate the supported types.
* Keep `filter_transform` generic and usable with capturing lambdas.
* Avoid unnecessary copies when reading input values.

## Scoring (0-3 points)

* **0:** Does not compile or returns incorrect results.
* **1:** Basic behavior works for one type, but filtering or transformation is incomplete.
* **2:** Correct behavior for both supported types with appropriate const access.
* **3:** Generic function, efficient interfaces, capturing-lambda support, and correct explicit instantiation.
