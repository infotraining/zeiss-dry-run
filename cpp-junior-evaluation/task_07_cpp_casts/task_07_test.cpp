#include <gtest/gtest.h>
#include <vector>

#ifdef USE_SOLUTION
#include "task_07_solution.hpp"
using namespace Solution;
#else
#include "task_07.hpp"
#endif

TEST(CppCastsTest, CountsDevelopersUsingDynamicCast)
{
    Developer d1, d2;
    Manager m1;
    std::vector<Employee*> staff = {&d1, &m1, nullptr, &d2};

    EXPECT_EQ(count_developers(staff), 2);
}

TEST(CppCastsTest, TruncatesDoubleAndCallsLegacyApi)
{
    EXPECT_EQ(truncate_to_int(3.99), 3);
    EXPECT_NO_THROW(call_legacy_api("Hello Legacy"));
}
