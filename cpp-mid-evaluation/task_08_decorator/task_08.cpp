#include "task_08.hpp"

#include <utility>

void RecordingSink::send(const std::string& message)
{
    // TODO: Implement the send function to record the message
    (void)message;
}

const std::vector<std::string>& RecordingSink::messages() const
{
    return messages_;
}