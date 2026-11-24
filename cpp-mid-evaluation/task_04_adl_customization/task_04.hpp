#pragma once

#include <sstream>
#include <string>

namespace mid
{
    template <typename T>
    std::string format_value(const T& value)
    {
        // TODO: implement formatting to string using std::ostringstream
        (void)value;
        return {};
    }

    template <typename T>
    std::string format(const T& value)
    {
        // TODO: Call format_value unqualified so ADL can find customizations.
        (void)value;
        return {};
    }
} // namespace mid

namespace geometry
{
    struct Point
    {
        int x{};
        int y{};
    };
} // namespace geometry
