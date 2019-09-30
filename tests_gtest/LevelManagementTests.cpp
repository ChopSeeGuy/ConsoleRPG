#include <gtest/gtest.h>
#include "../header/LevelManagement.hpp"

struct LevelManagementTests : testing::Test
{
    LevelManagement cut;
};

TEST_F(LevelManagementTests, canGetCurrentLevel)
{
    ASSERT_EQ(1, cut.getCurrentLevel());
}