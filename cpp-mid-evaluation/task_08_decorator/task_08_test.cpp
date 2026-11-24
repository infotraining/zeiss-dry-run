#include <gtest/gtest.h>
#include <memory>
#include <string>
#include <vector>

#ifdef USE_SOLUTION
#include "task_08_solution.hpp"
using namespace Solution;
#else
#include "task_08.hpp"
#endif

TEST(DecoratorTest, DecoratorsComposeAndDelegate)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following lines once the solution is implemented.

    // auto recorder = std::make_unique<RecordingSink>();
    // auto* recorder_view = recorder.get();
    
    // auto sink = std::make_unique<AuditSink>(
    //     std::make_unique<ValidatingSink>(std::move(recorder)));

    // sink->send("hello");
    // ASSERT_EQ(recorder_view->messages().size(), 1u);
    // EXPECT_EQ(recorder_view->messages()[0], "hello");
    // auto* audit = static_cast<AuditSink*>(sink.get());
    // EXPECT_EQ(audit->audit_log(), (std::vector<std::string>{"hello"}));
}

TEST(DecoratorTest, ValidationRejectsEmptyMessages)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following lines once the solution is implemented.

    // auto sink = std::make_unique<ValidatingSink>(std::make_unique<RecordingSink>());
    // EXPECT_THROW(sink->send(""), std::invalid_argument);
}

TEST(DecoratorTest, DecoratorOrderControlsWhetherRejectedMessageIsAudited)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following lines once the solution is implemented.

    // auto sink = std::make_unique<AuditSink>(
    //     std::make_unique<ValidatingSink>(
    //         std::make_unique<RecordingSink>()));
    // auto* audit = static_cast<AuditSink*>(sink.get());
    // EXPECT_THROW(sink->send(""), std::invalid_argument);
    // EXPECT_EQ(audit->audit_log(), (std::vector<std::string>{""}));
}

TEST(DecoratorTest, RejectsNullWrappedService)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following lines once the solution is implemented.

    // EXPECT_THROW((ValidatingSink(nullptr)), std::invalid_argument);
}
