#include <gtest/gtest.h>

#ifdef USE_SOLUTION
#include "task_12_solution.hpp"
using namespace Solution;
#else
#include "task_12.hpp"
#endif

TEST(UmlDoxygenTest, CompletesWorkflowThroughValidTransitions)
{
    Workflow workflow;
    EXPECT_EQ(workflow.state(), WorkflowState::Idle);
    EXPECT_TRUE(workflow.start());
    EXPECT_EQ(workflow.state(), WorkflowState::Running);
    EXPECT_TRUE(workflow.complete());
    EXPECT_EQ(workflow.state(), WorkflowState::Completed);
}

TEST(UmlDoxygenTest, RejectsInvalidTransitions)
{
    Workflow workflow;
    EXPECT_FALSE(workflow.complete());
    EXPECT_FALSE(workflow.fail());
    ASSERT_TRUE(workflow.start());
    EXPECT_FALSE(workflow.start());
    ASSERT_TRUE(workflow.fail());
    EXPECT_FALSE(workflow.complete());
    EXPECT_EQ(workflow.state(), WorkflowState::Failed);
}
