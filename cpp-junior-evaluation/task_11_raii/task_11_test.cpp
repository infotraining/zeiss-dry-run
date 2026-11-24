#include <gtest/gtest.h>
#include <stdexcept>
#include <type_traits>

#ifdef USE_SOLUTION
#include "task_11_solution.hpp"
using namespace Solution;
#else
#include "task_11.hpp"
#endif

TEST(RaiiTest, ResetsFlagEvenWhenExceptionIsThrown)
{
    bool isRunning = false;

    EXPECT_NO_THROW(execute_with_guard(isRunning, false));
    EXPECT_FALSE(isRunning);

    EXPECT_THROW(execute_with_guard(isRunning, true), std::runtime_error);
    EXPECT_FALSE(isRunning);
}

TEST(RaiiTest, GuardIsNonCopyable)
{
    EXPECT_FALSE(std::is_copy_constructible<ScopeFlagGuard>::value);
    EXPECT_FALSE(std::is_copy_assignable<ScopeFlagGuard>::value);
}
