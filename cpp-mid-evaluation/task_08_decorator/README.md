# Task 8: Decorator Pattern

Implement a `MessageSink` interface with a recording sink, then add a validating decorator that rejects empty messages and an audit decorator that records messages passed through it. Decorators should own and delegate to another sink so they can be composed in either order.

## Scoring (0-3 points)

* **0:** Does not compile or fails to delegate.
* **1:** One decorator works, but composition or ownership is unsafe.
* **2:** Both decorators work and can be stacked.
* **3:** Correct order-dependent behavior, clear interfaces, and RAII ownership.
