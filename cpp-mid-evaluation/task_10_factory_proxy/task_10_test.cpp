#include <gtest/gtest.h>
#include <memory>

#ifdef USE_SOLUTION
#include "task_10_solution.hpp"
using namespace Solution;
#else
#include "task_10.hpp"
#endif

TEST(FactoryProxyTest, ProxyCreatesAndReusesBackendOnFirstUse)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following lines once the solution implementation is available.

    // StorageProxy proxy(std::make_unique<MemoryStorageFactory>());
    // EXPECT_FALSE(proxy.initialized());
    // proxy.put("name", "Ada");
    // EXPECT_TRUE(proxy.initialized());
    // EXPECT_EQ(proxy.get("name"), "Ada");
    // EXPECT_TRUE(proxy.initialized());
}

TEST(FactoryProxyTest, FactoriesSelectStorageBehavior)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following lines once the solution implementation is available.

    // StorageProxy normal(std::make_unique<MemoryStorageFactory>());
    // normal.put("key", "value");
    // EXPECT_FALSE(normal.get("KEY").has_value());

    // StorageProxy uppercase(std::make_unique<UppercaseStorageFactory>());
    // uppercase.put("key", "value");
    // EXPECT_EQ(uppercase.get("KEY"), "value");
}

TEST(FactoryProxyTest, RejectsNullFactory)
{
    FAIL() << "This test requires the solution implementation.";

    // Uncomment the following line once the solution implementation is available.

    // EXPECT_THROW((StorageProxy(nullptr)), std::invalid_argument);
}
