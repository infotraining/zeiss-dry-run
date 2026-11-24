# Task 2: Smart Pointers (`std::unique_ptr` and `std::weak_ptr`)

## Objective

1. Implement class `PacketBuffer` that allocates an array of `uint8_t` with specified `size` and fills it with zeros:
   - Method `size_t size() const` returns the buffer size
   - Method `uint8_t* release_buffer()` transfers buffer ownership outside (using `std::move`), zeroing the internal size to `0`
   - Modernize the implementation using a smart pointer instead of a native pointer

2. Solve the circular reference problem between classes `NodeA` and `NodeB`:
   - Method `bool NodeB::has_valid_prev() const` returns `true` if the `NodeA` object still exists

3. Implement the observer pattern using smart pointers to manage observer lifetimes

## Implementation Requirements

- Use `std::unique_ptr<T[]>` for array management
- Use `std::weak_ptr` to break circular references
- Properly handle resource ownership transfer with `std::move`
- Check pointer validity using `.expired()` and `.lock()` methods
- Use `std::shared_ptr` and `std::weak_ptr` for shared ownership of observers and resolve lifetime issues for observer objects

## Evaluation Criteria (0-3 points)

- **0 points:** Memory leaks or compilation errors
- **1 point:** Correct use of `unique_ptr<T[]>`, but no solution for the `weak_ptr` cycle
- **2 points:** Both parts correct, but missing size zeroing after `release_buffer()`
- **3 points:** Complete, safe implementation using `std::move` and `.expired()` / `.lock()`
