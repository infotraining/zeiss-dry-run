#pragma once

#include <cstddef>
#include <functional>
#include <stop_token>
#include <utility>
#include <vector>

class ThreadPool
{
public:
    using Work = std::function<void()>;
public:
    explicit ThreadPool(std::size_t worker_count);
    ~ThreadPool();
    ThreadPool(const ThreadPool&) = delete;
    ThreadPool& operator=(const ThreadPool&) = delete;

    void submit(Work work);
};