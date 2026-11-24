#include "task_06.hpp"

template <typename T>
bool BoundedQueue<T>::push(T value)
{
    (void)value;
    return false;
}

template <typename T>
std::optional<T> BoundedQueue<T>::pop()
{
    return std::nullopt;
}

template <typename T>
void BoundedQueue<T>::close()
{
}

template class BoundedQueue<int>;
