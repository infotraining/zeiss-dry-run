#pragma once

#include <memory>
#include <string>
#include <vector>

class MessageSink
{
public:
    virtual ~MessageSink() = default;
    virtual void send(const std::string& message) = 0;
};

class RecordingSink : public MessageSink
{
public:
    void send(const std::string& message) override;
    const std::vector<std::string>& messages() const;

private:
    std::vector<std::string> messages_;
};