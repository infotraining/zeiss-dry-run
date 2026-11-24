#include <deque>
#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <list>
#include <ranges>
#include <vector>

#ifdef USE_SOLUTION
#include "task_08_solution.hpp"
using namespace Solution;
#else
#include "task_08.hpp"
#endif

TEST(StlContainersTest, RemovesEvenNumbersSafely)
{
    std::vector<int> nums = {2, 1, 4, 6, 3, 5, 8};
    remove_even_numbers(nums);
    std::vector<int> expected = {1, 3, 5};
    EXPECT_EQ(nums, expected);
}

TEST(StlContainersTest, CountsWordFrequencies)
{
    std::vector<std::string> words = {"cpp", "stl", "cpp", "test", "stl", "cpp"};
    auto freq = count_word_frequencies(words);
    EXPECT_EQ(freq["cpp"], 3);
    EXPECT_EQ(freq["stl"], 2);
    EXPECT_EQ(freq["test"], 1);
}

template <typename T>
concept StringLike = std::is_convertible_v<T, std::string>;

template <std::ranges::range T>
    requires(!StringLike<T>)
std::ostream& operator<<(std::ostream& os, const T& vec)
{
    os << "[ ";
    for (const auto& elem : vec)
        os << elem << " ";
    os << " ]";
    return os;
}

TEST(StlContainersTest, MovesChunkOfContainerToVector)
{
    std::vector<int> source = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::vector<int> destination;

    move_value_range_to(source, destination, 3, 6);

    std::vector<int> expected_source = {1, 2, 7, 8, 9};
    std::vector<int> expected_destination = {3, 4, 5, 6};

    EXPECT_EQ(source, expected_source);
    EXPECT_EQ(destination, expected_destination);
}