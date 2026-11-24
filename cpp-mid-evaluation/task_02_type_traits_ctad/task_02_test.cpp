#include <gtest/gtest.h>
#include <string>
#include <type_traits>

#ifdef USE_SOLUTION
#include "task_02_solution.hpp"
using namespace Solution;
#else
#include "task_02.hpp"
#endif

TEST(TypeTraitsCtadTest, DetectionSupportedTypes)
{
    EXPECT_TRUE((is_supported_value_v<int>));
    EXPECT_TRUE((is_supported_value_v<int long>));
    EXPECT_TRUE((is_supported_value_v<long>));  
    EXPECT_TRUE((is_supported_value_v<unsigned long>));  
    EXPECT_TRUE((is_supported_value_v<const int>));
    EXPECT_TRUE((is_supported_value_v<int&>));
    EXPECT_TRUE((is_supported_value_v<const int&>));
    EXPECT_TRUE((is_supported_value_v<unsigned int>));
    EXPECT_TRUE((is_supported_value_v<std::string>));
    EXPECT_FALSE((is_supported_value_v<void*>));
}

TEST(TypeTraitsCtadTest, DeductionGuideMapsStringLiteralToString)
{
    FAIL() << "This test requires the solution implementation.";
    
    // Uncomment the following code

    // ValueBox number{42};
    // static_assert(std::is_same_v<decltype(number), ValueBox<int>>);
    // EXPECT_EQ(number.value, 42);
    
    // ValueBox text{"hello"};
    // static_assert(std::is_same_v<decltype(text), ValueBox<std::string>>);
    // EXPECT_EQ(text.value, "hello");
}

TEST(TypeTraitsCtadTest, FormatsArithmeticAndTextValues)
{
    EXPECT_EQ(format_value(12), "12");
    EXPECT_EQ(format_value(std::string("value")), "value");
}
