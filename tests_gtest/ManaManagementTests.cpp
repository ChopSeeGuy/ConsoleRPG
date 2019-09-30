#include <gtest/gtest.h>
#include "../header/ManaManagement.hpp"

struct ManaManagementTests : testing::Test
{
    ManaManagement cut;
};

TEST_F(ManaManagementTests, canGetMaxMana)
{
    ASSERT_EQ(10, cut.getMaxMana());
}

TEST_F(ManaManagementTests, canGetCurrentMana)
{
    ASSERT_EQ(10, cut.getCurrentMana());
}