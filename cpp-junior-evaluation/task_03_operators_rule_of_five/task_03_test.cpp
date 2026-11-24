#include <gtest/gtest.h>
#include <utility>

#ifdef USE_SOLUTION
#include "task_03_solution.hpp"
using namespace Solution;
#else
#include "task_03.hpp"
#endif

TEST(RuleOfFiveTest, DeepCopyWorksCorrectly) {
    IntArray a(3);
    a[0] = 10; a[1] = 20; a[2] = 30;

    IntArray b = a;
    EXPECT_EQ(a, b);

    b[1] = 99;
    EXPECT_NE(a, b);
    EXPECT_EQ(a[1], 20);
}

TEST(RuleOfFiveTest, MoveSemanticsTransfersOwnership) {
    IntArray a(2);
    a[0] = 5; a[1] = 7;

    IntArray b = std::move(a);
    EXPECT_EQ(b.size(), 2u);
    EXPECT_EQ(b[0], 5);
    EXPECT_EQ(a.size(), 0u);
}
