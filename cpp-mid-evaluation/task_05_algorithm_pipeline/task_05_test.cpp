#include <gtest/gtest.h>
#include <vector>

#ifdef USE_SOLUTION
#include "task_05_solution.hpp"
using namespace Solution;
#else
#include "task_05.hpp"
#endif

TEST(AlgorithmPipelineTest, FiltersSortsAndTransforms)
{
    const std::vector<ScoredItem> items{{3, 80, "C"}, {2, 95, "B"}, {1, 95, "A"}, {4, 40, "D"}};
    
    EXPECT_EQ(build_report(items, 80),
        (std::vector<std::string>{"1:A=95", "2:B=95", "3:C=80"}));
}

TEST(AlgorithmPipelineTest, FindsByIdAndHandlesMissingValues)
{
    const std::vector<ScoredItem> items{{3, 80, "C"}, {4, 40, "D"}};
    ASSERT_NE(find_item_by_id(items, 4), nullptr);
    EXPECT_EQ(find_item_by_id(items, 4)->name, "D");
    EXPECT_EQ(find_item_by_id(items, 99), nullptr);
}

TEST(AlgorithmPipelineTest, EmptyInputProducesEmptyReport)
{
    EXPECT_TRUE(build_report({}, 0).empty());
}

TEST(AlgorithmPipelineTest, GetsTopNItems)
{
    const std::vector<ScoredItem> items{
        {3, 80, "C"}, 
        {2, 95, "B"}, 
        {1, 95, "A"}, 
        {4, 40, "D"}, 
        {5, 60, "E"},
        {6, 70, "F"}
    };

    const auto top_2 = get_top_n(items, 2);
    
    ASSERT_EQ(top_2.size(), 2);
    EXPECT_EQ(top_2[0].id, 1);
    EXPECT_EQ(top_2[1].id, 2);
}