#pragma once

#include <memory>
#include <optional>
#include <string>

class Storage
{
public:
    virtual ~Storage() = default;
    virtual void put(std::string key, std::string value) = 0;
    virtual std::optional<std::string> get(const std::string& key) const = 0;
};

class StorageFactory
{
public:
    virtual ~StorageFactory() = default;
    virtual std::unique_ptr<Storage> create() const = 0;
};

class MemoryStorageFactory : public StorageFactory
{
public:
    std::unique_ptr<Storage> create() const override;
};

class UppercaseStorageFactory : public StorageFactory
{
public:
    std::unique_ptr<Storage> create() const override;
};

class StorageProxy : public Storage
{
public:
    explicit StorageProxy(std::unique_ptr<StorageFactory> factory);
    void put(std::string key, std::string value) override;
    std::optional<std::string> get(const std::string& key) const override;
    bool initialized() const;

private:
    std::unique_ptr<StorageFactory> factory_;
};
