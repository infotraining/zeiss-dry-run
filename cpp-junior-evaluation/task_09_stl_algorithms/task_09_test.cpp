#include <gtest/gtest.h>
#include <vector>

#ifdef USE_SOLUTION
#include "task_09_solution.hpp"
using namespace Solution;
#else
#include "task_09.hpp"
#endif

TEST(StlAlgorithmsTest, CalculatesGrossValueForInStockItems)
{
    std::vector<Product> items = {
        Product{1, 100.0, true},
        Product{2, 50.0, false},
        Product{3, 200.0, true}};
    EXPECT_DOUBLE_EQ(total_in_stock_gross_value(items, 0.23), 369.0);
}

TEST(StlAlgorithmsTest, SortsAndFindsProductWithLowerBound)
{
    using std::nullopt;

    std::vector<Product> items = {
        Product{30, 10.0, true},
        Product{10, 20.0, true},
        Product{20, 30.0, false}
    };

    std::optional<Product> found = find_product_by_id(items, 20);
    ASSERT_NE(found, nullopt);
    EXPECT_DOUBLE_EQ(found->price, 30.0);

    EXPECT_EQ(find_product_by_id(items, 25), nullopt);
}
