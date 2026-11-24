#include <gtest/gtest.h>
#include <memory>

#ifdef USE_SOLUTION
#include "task_02_solution.hpp"
using namespace Solution;
#else
#include "task_02.hpp"
#endif

TEST(SmartPointersTest, PacketBufferTransferOwnership)
{
    PacketBuffer buf(64);
    EXPECT_EQ(buf.size(), 64u);

    auto rawPtr = buf.release_buffer();
    EXPECT_NE(rawPtr, nullptr);
    EXPECT_EQ(buf.size(), 0u);
}

TEST(SmartPointersTest, WeakPtrBreaksCycle)
{
    std::weak_ptr<NodeA> observerA;
    std::shared_ptr<NodeB> b = std::make_shared<NodeB>();

    {
        auto a = std::make_shared<NodeA>();
        observerA = a;
        a->next = b;
        b->prev = a;
        EXPECT_TRUE(b->has_valid_prev());
    }

    EXPECT_TRUE(observerA.expired());
    EXPECT_FALSE(b->has_valid_prev());
}

struct TestObserver : public Observer
{
    TestObserver(std::string name)
        : name(std::move(name))
    {
    }

    TestObserver(const TestObserver&) = delete;
    TestObserver& operator=(const TestObserver&) = delete;

    ~TestObserver()
    {
        std::cout << "Observer " << name << " destroyed" << std::endl;
    }

    std::string name;
    int last_value = 0;

    void update(int value) override
    {
        std::cout << "Observer " << name << " received update: " << value << std::endl;
        last_value = value;
    }
};

TEST(SmartPointersTest, ObserverPattern)
{
    TemperatureSensor sensor;

    TestObserver observer_1("observer_1");
    sensor.attach(&observer_1);

    {
        TestObserver observer_2("observer_2");
        sensor.attach(&observer_2);

        sensor.set_temperature(20);
        EXPECT_EQ(observer_1.last_value, 20);
        EXPECT_EQ(observer_2.last_value, 20);
    }   

    sensor.set_temperature(25);
    EXPECT_EQ(observer_1.last_value, 25);
    sensor.set_temperature(23);
    EXPECT_EQ(observer_1.last_value, 23);
}
