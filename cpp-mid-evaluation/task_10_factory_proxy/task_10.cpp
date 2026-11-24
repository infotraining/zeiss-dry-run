#include "task_10.hpp"

#include <utility>

std::unique_ptr<Storage> MemoryStorageFactory::create() const
{
    return {};
}

std::unique_ptr<Storage> UppercaseStorageFactory::create() const
{
    return {};
}

StorageProxy::StorageProxy(std::unique_ptr<StorageFactory> factory) : factory_(std::move(factory))
{
}

void StorageProxy::put(std::string key, std::string value)
{
    (void)key;
    (void)value;
}

std::optional<std::string> StorageProxy::get(const std::string& key) const
{
    (void)key;
    return std::nullopt;
}

bool StorageProxy::initialized() const
{
    return false;
}
