#include <gtest/gtest.h>

#ifdef USE_SOLUTION
#include "task_04_solution.hpp"
#else
#include "task_04.hpp"
#endif

TEST(AdlCustomizationTest, UsesStreamableFallback)
{
    EXPECT_EQ(mid::format(42), "42");
}

TEST(AdlCustomizationTest, FindsCustomizationInTypeNamespace)
{
    EXPECT_EQ(mid::format(geometry::Point{3, 8}), "(3, 8)");
}

TEST(AdlCustomizationTest, FormatsValuesUsingADL)
{
    int int_value = 42;
    std::string str_value = "Hello";
    geometry::Point point_value{3, 8};

    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following code to enable the test
    
    // TODO: Implement the ADL customization for format_value if necessary.

    // EXPECT_EQ(format_value(int_value), "42");
    // EXPECT_EQ(format_value(str_value), "Hello");
    // EXPECT_EQ(format_value(point_value), "(3, 8)");
}