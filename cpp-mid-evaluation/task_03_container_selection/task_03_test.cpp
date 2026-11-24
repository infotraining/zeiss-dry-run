#include <gtest/gtest.h>
#include <vector>

#ifdef USE_SOLUTION
#include "task_03_solution.hpp"
using namespace Solution;
#else
#include "task_03.hpp"
#endif

TEST(ContainerSelectionTest, FindsAndProcessesEvents)
{
    EventCatalog catalog;
    catalog.add({2, "second"});
    catalog.add({1, "first"});

    ASSERT_TRUE(catalog.find(2).has_value());
    EXPECT_EQ(catalog.find(2)->message, "second");
    const auto processed = catalog.process_oldest();
    ASSERT_TRUE(processed.has_value());
    EXPECT_EQ(processed->id, 2);
    EXPECT_FALSE(catalog.find(2).has_value());
}

TEST(ContainerSelectionTest, SnapshotIsSortedAndMissingIdsAreEmpty)
{
    EventCatalog catalog;
    catalog.add({7, "seven"});
    catalog.add({3, "three"});
    const auto snapshot = catalog.snapshot_sorted();
    ASSERT_EQ(snapshot.size(), 2u);
    EXPECT_EQ(snapshot[0].id, 3);
    EXPECT_EQ(snapshot[1].id, 7);
    EXPECT_FALSE(catalog.find(99).has_value());
    EventCatalog empty_catalog;
    EXPECT_FALSE(empty_catalog.process_oldest().has_value());
}

TEST(ContainerSelectionTest, DuplicateIdUpdatesWithoutDuplicatingQueueEntry)
{
    EventCatalog catalog;
    catalog.add({4, "old"});
    catalog.add({4, "new"});
    EXPECT_EQ(catalog.snapshot_sorted().size(), 1u);
    const auto processed = catalog.process_oldest();
    ASSERT_TRUE(processed.has_value());
    EXPECT_EQ(processed->message, "new");
    EXPECT_FALSE(catalog.process_oldest().has_value());
}
