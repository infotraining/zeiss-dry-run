# Task 5: Writing Unit Tests (Google Test)

## Objective

Write class `BankAccount` and a comprehensive unit test suite using TDD (Test-Driven Development).

## Requirements

Class `BankAccount` must have:
- Constructor accepting initial balance
- Method `deposit(double amount)` to add funds
- Method `withdraw(double amount)` to remove funds
- Method `transfer(BankAccount& to, double amount)` to transfer funds between accounts
- Method `balance()` returning current balance
- Deposit or withdrawal of negative amount throws `std::invalid_argument`
- Withdrawal of amount greater than balance throws `std::runtime_error`

## Testing Requirements

- Write comprehensive unit tests covering all functionality
- Test valid operations (deposit, withdraw, transfer)
- Test exception handling for invalid operations
- Verify state consistency after exceptions (strong exception guarantee)

## Evaluation Criteria (0-3 points)

- **0 points:** Tests do not compile or do not check exceptions
- **1 point:** Basic `TEST` macros without `TEST_F` or incomplete error path coverage
- **2 points:** Correct `TEST_F` usage, but using `EXPECT_EQ` instead of `EXPECT_DOUBLE_EQ` for floating-point numbers
- **3 points:** Complete `TEST_F` suite, `EXPECT_DOUBLE_EQ`, `EXPECT_THROW`, and state consistency verification after exceptions
