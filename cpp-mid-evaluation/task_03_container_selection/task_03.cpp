#include "task_03.hpp"

void EventCatalog::add(Event event)
{
    (void)event;
}

std::optional<Event> EventCatalog::process_oldest()
{
    return std::nullopt;
}

std::optional<Event> EventCatalog::find(int id) const
{
    (void)id;
    return std::nullopt;
}

std::vector<Event> EventCatalog::snapshot_sorted() const
{
    return {};
}
