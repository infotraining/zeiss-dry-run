#pragma once
#include <cstddef>

class IntArray {
public:
    explicit IntArray(size_t size);

    size_t size() const { return size_; }
    int& operator[](size_t index);
    
    bool operator==(const IntArray& other) const;

private:
    size_t size_;
    int* data_;
};
