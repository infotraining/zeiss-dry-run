#include <gtest/gtest.h>

#ifdef USE_SOLUTION
#include "task_10_solution.hpp"
using namespace Solution;
#else
#include "task_10.hpp"
#endif

TEST(DataStructures_LinkedListTest, DefaultConstruction)
{
    FAIL() << "This test requires the solution implementation.";

    // LinkedList list;
    // EXPECT_TRUE(list.is_empty());
    // EXPECT_EQ(list.size(), 0);
}

TEST(DataStructures_LinkedListTest, ConstructorWithInitializerList)
{

    FAIL() << "This test requires the solution implementation.";

    //     LinkedList list{42, 43};
    //     EXPECT_EQ(list.size(), 2);
    //     EXPECT_EQ(list.front(), 42);
    //     EXPECT_EQ(list.back(), 43);
}

TEST(DataStructures_LinkedListTest, PushingBackItems)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList list;
    //     EXPECT_TRUE(list.is_empty());
    //     list.push_back(42);
    //     EXPECT_FALSE(list.is_empty());
    //     EXPECT_EQ(list.size(), 1);
    //     EXPECT_EQ(list.back(), 42);
    //     EXPECT_EQ(list.front(), 42);

    //     list.push_back(43);
    //     EXPECT_EQ(list.size(), 2);
    //     EXPECT_EQ(list.back(), 43);
    //     EXPECT_EQ(list.front(), 42);

    //     list.push_back(44);
    //     EXPECT_EQ(list.size(), 3);
    //     EXPECT_EQ(list.back(), 44);
    //     EXPECT_EQ(list.front(), 42);
}

struct LinkedListWithItems : ::testing::Test
{
    LinkedList list;

    void SetUp() override
    {
        FAIL() << "Uncomment this lines below when the solution is implemented.";

        // list.push_back(42);
        // list.push_back(43);
        // list.push_back(44);
    }
};

TEST_F(LinkedListWithItems, PopingItems)
{
    FAIL() << "This test requires the solution implementation.";

    //     EXPECT_EQ(list.size(), 3);
    //     EXPECT_EQ(list.back(), 44);

    //     list.pop_back();
    //     EXPECT_EQ(list.size(), 2);
    //     EXPECT_EQ(list.back(), 43);

    //     list.pop_back();
    //     EXPECT_EQ(list.size(), 1);
    //     EXPECT_EQ(list.back(), 42);

    //     list.pop_back();
    //     EXPECT_TRUE(list.is_empty());
    //     EXPECT_EQ(list.size(), 0);
}

TEST_F(LinkedListWithItems, Equality)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList other;
    //     other.push_back(42);
    //     other.push_back(43);
    //     other.push_back(44);

    //     ASSERT_EQ(list.size(), other.size());
    //     ASSERT_EQ(list, other);
}

TEST_F(LinkedListWithItems, Swap)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList other;
    //     other.push_back(1);
    //     other.push_back(2);
    //     other.push_back(3);

    //     list.swap(other);

    //     LinkedList expected_list{1, 2, 3};
    //     EXPECT_EQ(list, expected_list);

    //     LinkedList expected_other{42, 43, 44};
    //     EXPECT_EQ(other, expected_other);
}

TEST_F(LinkedListWithItems, CopyConstructor)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList copy(list);

    //     EXPECT_EQ(copy, list);
}

TEST_F(LinkedListWithItems, CopyAssignment)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList copy;
    //     copy = list;

    //     EXPECT_EQ(copy, list);
}

TEST(LinkedListTest, MoveConstructor)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList original{42, 43, 44};
    //     LinkedList moved(std::move(original));

    //     LinkedList expected{42, 43, 44};
    //     EXPECT_EQ(moved, expected);
    //     EXPECT_TRUE(original.is_empty());
}

TEST(LinkedListTest, MoveAssignment)
{
    FAIL() << "This test requires the solution implementation.";

    //     LinkedList original{42, 43, 44};
    //     LinkedList moved;
    //     moved = std::move(original);

    //     LinkedList expected{42, 43, 44};
    //     EXPECT_EQ(moved, expected);
    //     EXPECT_TRUE(original.is_empty());
}

/////////////////////////////////////////////////////////////////////////////////////////////////////

TEST(DataStructuresTest, ValidatesBracketsWithStack)
{
    EXPECT_TRUE(are_brackets_balanced("{[()]}"));
    EXPECT_TRUE(are_brackets_balanced("a + (b * [c - d])"));
    EXPECT_FALSE(are_brackets_balanced("{[(])}"));
    EXPECT_FALSE(are_brackets_balanced("((("));
    EXPECT_FALSE(are_brackets_balanced(")"));
}
