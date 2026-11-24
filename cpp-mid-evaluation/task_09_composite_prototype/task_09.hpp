#pragma once

#include <memory>
#include <vector>

class WorkItem
{
public:
    virtual ~WorkItem() = default;
    virtual int effort() const = 0;
    virtual std::unique_ptr<WorkItem> clone() const = 0;
};

class LeafTask : public WorkItem
{
public:
    explicit LeafTask(int effort);
    int effort() const override;
    std::unique_ptr<WorkItem> clone() const override;

private:
    int effort_;
};

