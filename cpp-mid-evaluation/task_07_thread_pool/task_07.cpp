#include "task_07.hpp"

ThreadPool::ThreadPool(std::size_t worker_count)
{
    (void)worker_count;
}

ThreadPool::~ThreadPool() = default;

void ThreadPool::submit(Work work)
{
    (void)work;
}