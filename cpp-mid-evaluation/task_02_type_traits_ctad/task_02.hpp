#pragma once

#include <string>
#include <type_traits>
#include <utility>

template <typename T>
struct is_supported_value : std::false_type
{
};

template <typename T>
constexpr bool is_supported_value_v = is_supported_value<T>::value;


///////////////////////////////////////////////////////

template <typename T>
struct ValueBox
{
    T value;

    explicit ValueBox(const T& v) : value(v) {}
};

///////////////////////////////////////////////////////

template <typename T>
std::string format_value(const T& value)
{
    (void)value;
    return {};
}
