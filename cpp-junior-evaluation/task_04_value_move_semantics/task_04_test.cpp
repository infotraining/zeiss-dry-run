#include <gtest/gtest.h>
#include <utility>

#ifdef USE_SOLUTION
#include "task_04_solution.hpp"
using namespace Solution;
#else
#include "task_04.hpp"
#endif

TEST(ValueMoveSemanticsTest, CreateProfileMovesArguments) {
    std::string name = "jan_kowalski";
    std::vector<int> pts = {10, 20, 30};

    auto profile = create_profile(std::move(name), std::move(pts));
    EXPECT_EQ(profile.username, "jan_kowalski");
    EXPECT_EQ(profile.scores.size(), 3u);
    EXPECT_TRUE(name.empty());
    EXPECT_TRUE(pts.empty());
}

TEST(ValueMoveSemanticsTest, ValueCategoriesAreCorrect) {
    int a = 10;

    EXPECT_EQ(classify_value_category(a), ValueCategory::ToDo);
    EXPECT_EQ(classify_value_category(20), ValueCategory::ToDo);
    EXPECT_EQ(classify_value_category(std::move(a)), ValueCategory::ToDo);

    int&& rv_ref = 665;
    EXPECT_EQ(classify_value_category(rv_ref), ValueCategory::ToDo);
    EXPECT_EQ(classify_value_category(std::move(rv_ref)), ValueCategory::ToDo);

    EXPECT_EQ(perfect_forward_test(a), ValueCategory::LValue);
    EXPECT_EQ(perfect_forward_test(20), ValueCategory::RValue);
    EXPECT_EQ(perfect_forward_test(std::move(a)), ValueCategory::RValue);
}
