#pragma once
#include <cstddef>
#include <cstdint>
#include <memory>
#include <vector>
#include <set>

class PacketBuffer {
public:
    explicit PacketBuffer(size_t size);
    size_t size() const;
    uint8_t* release_buffer();

private:
    uint8_t *data_;
    size_t size_;
};

//----------------------------------------------

struct NodeB;

struct NodeA {
    std::shared_ptr<NodeB> next;
};

struct NodeB {
    std::shared_ptr<NodeA> prev;
    
    bool has_valid_prev() const;
};

//-----------------------------------------------

class Observer
{
public:
    virtual ~Observer() = default;
    virtual void update(int value) = 0;
};

class Subject
{
protected:
    void notify(int value)
    {
        for (auto observer : observers_)
        {
            observer->update(value);
        }
    }
public:
    void attach(Observer* observer)
    {
        observers_.insert(observer);
    }

    void detach(Observer* observer)
    {
        observers_.erase(observer);
    }

private:
    std::set<Observer*> observers_;
};

class TemperatureSensor : public Subject
{
public:
    void set_temperature(int value)
    {
        notify(value);
    }
};