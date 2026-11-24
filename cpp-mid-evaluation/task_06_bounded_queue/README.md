# Task 6: Thread-Safe Bounded Queue

Implement a fixed-capacity queue for multiple producers and consumers.

* `push` waits while the queue is full and returns `false` if the queue has been closed.
* `pop` waits while the queue is empty. Once closed, queued values can still be drained; after draining, `pop` returns `std::nullopt`.
* `close` is idempotent and wakes blocked producers and consumers.

Use a mutex and condition variables. Tests should not depend on arbitrary sleeps.

## Scoring (0-3 points)

* **0:** Data races, deadlocks, or incorrect queue behavior.
* **1:** Correct single-threaded behavior but incomplete blocking or close behavior.
* **2:** Correct synchronization, wakeups, and draining after close.
* **3:** Robust edge cases, no lost notifications, and deterministic concurrency tests.
