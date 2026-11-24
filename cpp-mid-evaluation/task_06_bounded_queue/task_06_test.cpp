#include <gtest/gtest.h>

#include <chrono>
#include <future>
#include <optional>
#include <thread>
#include <latch>

#ifdef USE_SOLUTION
#include "task_06_solution.hpp"
using namespace Solution;
#else
#include "task_06.hpp"
#endif

using namespace std::chrono_literals;

TEST(BoundedQueueTest, PushesPopsAndDrainsAfterClose)
{
    BoundedQueue<int> queue(2);
    EXPECT_TRUE(queue.push(10));
    EXPECT_TRUE(queue.push(20));
    queue.close();
    EXPECT_FALSE(queue.push(30));
    EXPECT_EQ(queue.pop(), 10);
    EXPECT_EQ(queue.pop(), 20);
    EXPECT_EQ(queue.pop(), std::nullopt);
}

TEST(BoundedQueueTest, CloseWakesWaitingConsumer)
{
    BoundedQueue<int> queue(1);
    std::latch latch(1);
    auto result = std::async(std::launch::async, [&queue, &latch] { latch.count_down(); return queue.pop(); });
    latch.wait();
    queue.close();
    ASSERT_EQ(result.wait_for(1s), std::future_status::ready);
    EXPECT_EQ(result.get(), std::nullopt);
}

TEST(BoundedQueueTest, ConsumerFreesCapacityForBlockedProducer)
{
    BoundedQueue<int> queue(1);
    ASSERT_TRUE(queue.push(1));
    std::latch latch(1);

    auto producer = std::async(std::launch::async, [&queue, &latch] { latch.count_down(); return queue.push(2); });
    latch.wait();
    
    EXPECT_EQ(queue.pop(), 1);
    
    ASSERT_EQ(producer.wait_for(1s), std::future_status::ready);
    
    EXPECT_TRUE(producer.get());
    EXPECT_EQ(queue.pop(), 2);
    queue.close();
}

TEST(BoundedQueueTest, CloseWakesBlockedProducer)
{
    BoundedQueue<int> queue(1);
    ASSERT_TRUE(queue.push(1));
    std::latch latch(1);
    
    auto producer = std::async(std::launch::async, [&queue, &latch] { 
        latch.count_down();
        return queue.push(2); });
    latch.wait();
    
    queue.close();
    
    ASSERT_EQ(producer.wait_for(1s), std::future_status::ready);
    EXPECT_FALSE(producer.get());
}

TEST(BoundedQueueTest, RejectsZeroCapacity)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following code to enable the test

    // EXPECT_THROW((BoundedQueue<int>(0)), std::invalid_argument);
}
