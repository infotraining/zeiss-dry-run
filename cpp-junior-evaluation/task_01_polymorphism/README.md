# Task 1: Polymorphism and Virtual Destructor

## Objective

Implement a hierarchy of classes representing geometric shapes with the following structure and behavior:

1. **Abstract base class `Shape`** with:
   - A pure virtual method `double area() const = 0;`
   - A virtual destructor to prevent memory leaks

2. **Derived class `Circle`** accepting in the constructor:
   - `double radius` parameter

3. **Derived class `Rectangle`** accepting in the constructor:
   - `double width, double height` parameters

4. **Function `total_area()`** that:
   - Accepts a vector of Shape objects
   - Calculates and returns the sum of all shapes' areas

## Implementation Requirements

- Use `std::unique_ptr` for memory-safe shape management
- Store shapes in a `std::vector<std::unique_ptr<Shape>>`
- Implement the `override` keyword for virtual methods
- Mark methods as `const` where appropriate
- Handle `nullptr` checks in the `total_area()` function
- Use idiomatic Modern C++ practices

## Evaluation Criteria (0-3 points)

- **0 points:** Code does not compile, missing virtual destructor, or memory leaks detected
- **1 point:** Working classes but missing `override` keyword or `const` qualifier on `area()` method
- **2 points:** Correct implementation with virtual destructor and proper const-correctness
- **3 points:** Idiomatic Modern C++ code with smart pointers, `override`, `const`, and safe `nullptr` handling

## Expected Test Results

The implementation should correctly calculate:
- **Total area of Rectangle(4.0, 5.0) + Circle(1.0):** approximately 23.14159265
  - Rectangle area: 4.0 × 5.0 = 20.0
  - Circle area: π × 1.0² ≈ 3.14159265
  - Total: ≈ 23.14159265
- **Empty vector:** returns 0.0
