#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "task_11.hpp"

// Characterization tests of the original god class. Replace them with isolated tests:
// extract interfaces, inject them, and use mocks/stubs (see README).
TEST(OrderProcessorCharacterization, ConfirmsValidOrder)
{
    OrderProcessor processor;
    EXPECT_EQ(processor.process({"a@b.com", "regular", "book", 2, 1000, "card"}), OrderStatus::Confirmed);
}

TEST(OrderProcessorCharacterization, ReportsOutOfStock)
{
    OrderProcessor processor;
    EXPECT_EQ(processor.process({"a@b.com", "regular", "laptop", 3, 1000, "paypal"}), OrderStatus::OutOfStock);
}
