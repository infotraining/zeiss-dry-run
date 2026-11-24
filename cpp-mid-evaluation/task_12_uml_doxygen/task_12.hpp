#pragma once

enum class WorkflowState {
    Idle,
    Running,
    Completed,
    Failed
};

class Workflow
{
public:
    WorkflowState state() const;
    bool start();
    bool complete();
    bool fail();

private:
    WorkflowState state_{WorkflowState::Idle};
};
