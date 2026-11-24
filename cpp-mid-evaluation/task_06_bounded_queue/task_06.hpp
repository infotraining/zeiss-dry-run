#pragma once

#include <cstddef>
#include <optional>
#include <utility>

template <typename T>
class BoundedQueue
{
public:
    explicit BoundedQueue(std::size_t capacity) : capacity_(capacity) {}
    bool push(T value);
    std::optional<T> pop();
    void close();

private:
    std::size_t capacity_;
};
