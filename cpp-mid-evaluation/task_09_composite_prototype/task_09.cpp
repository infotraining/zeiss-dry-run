#include "task_09.hpp"

LeafTask::LeafTask(int effort)
    : effort_(effort)
{
}

int LeafTask::effort() const
{
    return effort_;
}

std::unique_ptr<WorkItem> LeafTask::clone() const
{
    return {};
}