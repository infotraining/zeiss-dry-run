# Mid-Level C++ Developer Evaluation

This repository contains 12 independent, practical C++ assessment tasks. Each task has a candidate starter implementation, a reference solution, Google Test coverage, and a README with requirements and a 0-3 point rubric.

## Project structure

Each `task_XX_*` directory contains:

* `README.md` - task statement, requirements, and scoring criteria.
* `task_XX.hpp` / `task_XX.cpp` - candidate starter code.
* `task_XX_solution.hpp` / `task_XX_solution.cpp` - reference implementation.
* `task_XX_test.cpp` - Google Test tests shared by starter and reference builds.
* `CMakeLists.txt` - task-specific build configuration.

## Build and run tests

### Candidate mode

```bash
cmake -S . -B build-candidate -DBUILD_SOLUTIONS=OFF
cmake --build build-candidate
ctest --test-dir build-candidate --output-on-failure
```

In candidate mode, tests are expected to fail until the TODOs are implemented.

### Reference-solution mode

```bash
cmake -S . -B build-solutions -DBUILD_SOLUTIONS=ON
cmake --build build-solutions
ctest --test-dir build-solutions --output-on-failure
```

Google Test v1.14.0 is fetched by CMake. The project requires C++23 and enables `/W4` on MSVC or `-Wall -Wextra -Wpedantic` on other supported compilers.

## Tasks

1. Generic algorithms and explicit template instantiation
2. Custom type traits, CTAD, and compile-time branching
3. STL container selection and workload trade-offs
4. Namespaces and argument-dependent lookup
5. Standard algorithm pipelines and optional parallel execution
6. A bounded, thread-safe queue
7. `std::jthread`, cancellation, and latch-based startup
8. The Decorator pattern
9. Composite and Prototype patterns
10. Abstract Factory and Proxy patterns
11. Refactoring, dependency injection, GTest, and GMock
12. UML design diagrams and Doxygen documentation
