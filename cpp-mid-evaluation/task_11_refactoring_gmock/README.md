# Task 11: Refactoring a God Class, Dependency Injection, and GMock

`OrderProcessor` in `task_11.hpp/.cpp` is a god class. It validates orders, calculates discounts by customer type, manages stock, charges payments, sends e-mails and logs, all directly. It violates:

* **SRP:** many reasons to change in a single class.
* **OCP:** new customer types or payment methods require editing `process()`.

It cannot be tested in isolation: stock is internal, and payments and e-mails are written to `std::cout`.

## Your task

1. Extract responsibilities behind interfaces (inventory, payment, notification, logging, discount policy) and inject them into `OrderProcessor`.
2. Make new discount rules addable without modifying `OrderProcessor`.
3. Preserve behavior: stock is released if payment fails, and a notification is sent only after a successful reservation and payment.
4. Write tests with test doubles: GMock mocks for interaction checks (call order, arguments, `Times(0)`), and simple stubs/fakes where only canned behavior is needed.

Be prepared to explain when a mock, stub, or fake is appropriate.

## Scoring (0-3 points)

* **0:** Behavior is incorrect or dependencies remain tightly coupled.
* **1:** Dependencies are injected, but tests do not isolate the processor.
* **2:** Success and failure paths are tested with suitable test doubles.
* **3:** Clear responsibilities, OCP-friendly discounts, interaction assertions (including release on payment failure and no notification after failure).

## Reference refactoring stages

See `task_11_steps.hpp` (namespaces `Step_1` ... `Step_4`) for a worked example, including how to discover interfaces, and `task_11_steps_test.cpp` for the tests of each stage.
