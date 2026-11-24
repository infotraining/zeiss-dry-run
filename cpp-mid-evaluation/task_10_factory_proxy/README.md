# Task 10: Abstract Factory and Proxy

Implement a storage abstraction with two backend factories. One backend stores keys as given; the other normalizes keys to uppercase. A `StorageProxy` owns a factory, creates the backend on first use, and reuses it thereafter.

The proxy exposes `initialized()` so lazy creation can be tested without timing or external resources.

## Scoring (0-3 points)

* **0:** Incorrect storage behavior or does not compile.
* **1:** One backend works, but factories or proxy delegation are incomplete.
* **2:** Both factories and lazy proxy behavior work.
* **3:** Clear abstractions, correct caching of the backend, and robust ownership.
