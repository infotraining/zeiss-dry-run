# Task 7: Thread Pool

Implement a thread pool that manages a fixed number of worker threads. Each worker executes submitted tasks and the pool ensures proper startup and shutdown coordination.
Destructor of the pool joins all worker threads to ensure no threads are left running and all submitted tasks are completed.

## Scoring (0-3 points)

* **0:** Threads in the pool do not start or tasks are not executed.
* **1:** Workers start and execute some tasks, but coordination or shutdown may be incomplete.
* **2:** Startup coordination and shutdown behave correctly. All tasks are executed reliably.
* **3:** All tasks are executed reliably, startup and shutdown are fully coordinated, and no threads are left running. Submission of tasks returns futures that provide the results of the tasks.
