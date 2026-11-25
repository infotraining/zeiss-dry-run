# Task 7: C++ Type Casts (`static_cast`, `dynamic_cast`, `const_cast`)

## Objective

Implement three functions using appropriate C++ casting operators (without C-style casts!):

1. `int count_developers(const std::vector<Employee*>& staff)` – counts how many pointers in the vector actually point to `Developer` objects (use `dynamic_cast`)

2. `int truncate_to_int(double value)` – explicitly converts `double` to `int` using `static_cast`

3. `void call_legacy_api(const char* text)` – passes `text` to C function `legacy_print(char* str)`, which does not modify the string but accepts non-const `char*` (use `const_cast`)

## Implementation Requirements

- Use only named C++ casting operators: `static_cast`, `dynamic_cast`, `const_cast`
- Never use C-style casts `(Type)x`
- Handle `nullptr` checks appropriately
- Understand when each cast is appropriate

## Evaluation Criteria (0-3 points)

- **0 points:** Use of C-style cast or undefined behavior
- **1 point:** Correct one or two casts
- **2 points:** All three casts correct, but missing `nullptr` check before `dynamic_cast`
- **3 points:** Exemplary use of named C++ casting operators
