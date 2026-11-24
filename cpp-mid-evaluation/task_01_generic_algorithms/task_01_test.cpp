#include <gtest/gtest.h>
#include <string>
#include <vector>

#ifdef USE_SOLUTION
#include "task_01_solution.hpp"
using namespace Solution;
#else
#include "task_01.hpp"
#endif

TEST(GenericAlgorithmsTest, SeriesStoresExplicitlyInstantiatedTypes)
{
    FAIL(); // Remove this line and uncomment the following code to enable the test

    // ValueSeries<int> integers;
    // integers.add(3);
    // integers.add(7);
    // EXPECT_EQ(integers.size(), 2u);
    // EXPECT_EQ(integers.values(), (std::vector<int>{3, 7}));

    // ValueSeries<double> decimals;
    // decimals.add(1.5);
    // EXPECT_EQ(decimals.values(), (std::vector<double>{1.5}));
}

TEST(GenericAlgorithmsTest, ValueSeriesStoresStrings)
{
    FAIL(); // Remove this line and uncomment the following code to enable the test

    // ValueSeries<std::string> strings;
    // strings.add("hello");
    // strings.add("world");
    // strings.emplace(3, '*');
    // EXPECT_EQ(strings.size(), 3u);
    // EXPECT_EQ(strings.values(), (std::vector<std::string>{"hello", "world", "***"}));
}

////////////////////////////////////////////////////////////////////////////////

TEST(GenericAlgorithmsTest, FiltersAndTransformsWithCapturingLambdas)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following code to enable the test

    // const std::vector<int> input{1, 2, 3, 4};
    // const int minimum = 2;

    // const auto output = filter_transform(
    //     input,
    //     [minimum](int value) { return value >= minimum; },
    //     [minimum](int value) { return std::to_string(value + minimum); });

    // EXPECT_EQ(output, (std::vector<std::string>{"4", "5", "6"}));
}

TEST(GenericAlgorithmsTest, EmptyInputProducesEmptyOutput)
{
    FAIL() << "This test requires the solution implementation.";
    
    // Uncomment the following code to enable the test

    //     const std::vector<double> input;
    //     const std::vector<int> output = filter_transform(input, [](double) { return true; }, [](double value) { return static_cast<int>(value); });
    //     EXPECT_TRUE(output.empty());
}
