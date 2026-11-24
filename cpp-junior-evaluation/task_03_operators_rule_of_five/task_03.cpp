#include "task_03.hpp"
#include <algorithm>

IntArray::IntArray(size_t size) : size_(size), data_(size > 0 ? new int[size]{} : nullptr) {}

int& IntArray::operator[](size_t index) {
    return data_[index];
}

bool IntArray::operator==(const IntArray& other) const {
    // TODO: Porównaj zawartość tablic
    return false;
}
