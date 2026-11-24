#include <gtest/gtest.h>
#include <string>

#ifdef USE_SOLUTION
#include "task_12_solution.hpp"
using namespace Solution;
#else
#include "task_12.hpp"
#endif

TEST(OopDesignTest, DateEnforcesInvariants)
{
    EXPECT_THROW(SimpleDate(32, 5, 2025), std::invalid_argument);
    EXPECT_THROW(SimpleDate(10, 13, 2025), std::invalid_argument);

    SimpleDate d(15, 6, 2025);
    EXPECT_THROW(d.set_month(0), std::invalid_argument);
    EXPECT_EQ(d.month(), 6);
}

TEST(OopDesignTest, NotificationServiceUsesComposition)
{
    FAIL() << "This test requires the solution implementation.";

    // TODO: Implement test that uses mock to verify that NotificationService.send_alert calls the logger correctly

    // NotificationService service;
    // service.send_alert("admin");

    // EXPECT_EQ(mock_logger.last_message, "Alert sent to: admin"); // uncomment this line
}
