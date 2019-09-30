#include <gtest/gtest.h>
#include "../header/HPManagement.hpp"

struct HPManagementTests : testing::Test
{
    HPManagement cut;
};

TEST_F(HPManagementTests, canGetCurrentHP)
{
    ASSERT_EQ(10, cut.getCurrentHP());
}

TEST_F(HPManagementTests, canGetMaxHP)
{
    ASSERT_EQ(10, cut.getMaxHP());
}