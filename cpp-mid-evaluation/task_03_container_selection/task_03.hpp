#pragma once

#include <optional>
#include <string>
#include <vector>

struct Event
{
    int id{};
    std::string message;
};

class EventCatalog
{
public:
    void add(Event event);
    std::optional<Event> process_oldest();
    std::optional<Event> find(int id) const;
    std::vector<Event> snapshot_sorted() const;

private:
    // TODO: Select containers that suit FIFO processing and ID lookup.
};
