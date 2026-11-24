#include "task_12.hpp"

WorkflowState Workflow::state() const
{
    return state_;
}

bool Workflow::start()
{
    return false;
}

bool Workflow::complete()
{
    return false;
}

bool Workflow::fail()
{
    return false;
}
