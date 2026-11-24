# Task 4: Value and Reference Semantics

## Objective

1. Implement structure `UserProfile` and function `create_profile`:
   - `UserProfile` has fields: `std::string username` and `std::vector<int> scores`
   - Implement `UserProfile create_profile(std::string username, std::vector<int> scores)`

2. Classify value categories in tests:
   - `ValueCategory classify_value_category(int& x)` returns `ValueCategory::LValue`
   - `ValueCategory classify_value_category(int&& x)` returns `ValueCategory::RValue`

3. Implement functions `ValueCategory perfect_forward_test(int&& x)` and `ValueCategory perfect_forward_test(int& x)` that correctly forward the argument to `classify_value_category` and return the appropriate value category

4. Implement `perfect_forward_test` as a template using perfect forwarding to pass the argument to `classify_value_category`

## Implementation Requirements

- Understand lvalue vs rvalue references
- Use `std::move` appropriately in `create_profile`
- Apply perfect forwarding with `std::forward<>`
- Optimize parameter passing

## Evaluation Criteria (0-3 points)

- **0 points:** Incorrect understanding of lvalue/rvalue or compilation errors
- **1 point:** Correct overloads, but missing `std::move` in `create_profile`
- **2 points:** Correct `std::move`, minor inaccuracies in value categories
- **3 points:** Complete understanding of value categories and parameter passing optimization
