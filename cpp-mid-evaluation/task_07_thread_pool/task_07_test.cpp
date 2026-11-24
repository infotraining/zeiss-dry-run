#include <atomic>
#include <gtest/gtest.h>
#include <latch>
#include <stdexcept>
#include <thread>
#include <algorithm>
#include <future>

#ifdef USE_SOLUTION
#include "task_07_solution.hpp"
using namespace Solution;
#else
#include "task_07.hpp"
#endif

TEST(ThreadPoolTest, SubmitsTasks)
{
    std::atomic<int> counter{0};

    {
        ThreadPool pool(4);

        for (int i = 0; i < 8; ++i)
        {
            pool.submit([&counter] { ++counter; });
        }
    } // ThreadPool goes out of scope and joins all threads

    EXPECT_EQ(counter, 8);
}

TEST(ThreadPoolTest, TasksAreExecutedInPoolThreads)
{
    std::thread::id main_thread_id = std::this_thread::get_id();

    const size_t task_count = std::thread::hardware_concurrency();
    std::vector<std::thread::id> thread_ids(task_count);

    {
        ThreadPool pool(task_count);
        std::latch latch(task_count);

        for (size_t i = 0; i < task_count; ++i)
        {
            pool.submit([&thread_ids, i, &latch] { thread_ids[i] = std::this_thread::get_id(); latch.arrive_and_wait(); });
        }
    } // ThreadPool goes out of scope and joins all threads

    EXPECT_TRUE(std::all_of(thread_ids.begin(), thread_ids.end(), [&](const std::thread::id& id) { return id != main_thread_id; }));
    
    std::ranges::sort(thread_ids);
    EXPECT_EQ(std::ranges::adjacent_find(thread_ids),thread_ids.end());
}

///////////////////////////////////////////////////////////////////////////////
// Extra task - Submit returns a future that will return the result of the task

// TEST(ThreadPoolTest, SubmitReturnsFutureThatWillReturnResult)
// {
//     auto add_task = [](int a, int b) { return a + b; };

//     ThreadPool pool(4);

//     std::atomic<int> counter{0};

//     std::future<int> f_int = pool.submit([&] { ++counter; return add_task(2, 3); });
//     std::future<std::string> f_str = pool.submit([&] { ++counter; return std::string("hello"); });
//     std::future<void> f_void = pool.submit([&] { ++counter; });

//     EXPECT_EQ(f_int.get(), 5);
//     EXPECT_EQ(f_str.get(), "hello");
    
//     f_void.wait();
//     EXPECT_EQ(counter, 3);
// }