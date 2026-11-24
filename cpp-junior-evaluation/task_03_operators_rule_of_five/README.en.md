# Task 3: Classes, Operators, and Rule of Five

## Objective

Implement class `IntArray` that manages a dynamic `int*` array of specified size:

1. Constructor `explicit IntArray(size_t size)` (fills the array with zeros)
2. Destructor that frees memory
3. Copy constructor and copy assignment operator (deep copy, protection against self-assignment `this == &other`)
4. Move constructor and move assignment operator
5. Subscript operator (operator[])
6. Equality operator `bool operator==(const IntArray& other) const`

## Implementation Requirements

- Implement the complete Rule of Five (all five special member functions)
- Perform deep copying in copy operations
- Protect against self-assignment
- Use move semantics for efficiency
- Apply const-correctness throughout
- Use `noexcept` where appropriate

## Evaluation Criteria (0-3 points)

- **0 points:** Double free, memory leak, or shallow copy
- **1 point:** Only Rule of Three implemented without move semantics
- **2 points:** Correct Rule of Five, but missing self-assignment protection or `noexcept`
- **3 points:** Complete, idiomatic implementation with proper const-correctness and `noexcept`
