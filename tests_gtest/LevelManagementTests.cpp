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

TEST_F(LevelManagementTests, willNotLevelUpWhenCurrentExpIsLowerThanRequiredExp)
{
    int beforeLevelUp = cut.getCurrentLevel();
    cut.LevelUp();
    int afterLevelUp = cut.getCurrentLevel();
    ASSERT_EQ(beforeLevelUp, afterLevelUp);
}

TEST_F(LevelManagementTests, willLevelUpWhenReachRequiredExp)
{
    int beforeLevelUp = cut.getCurrentLevel();
    cut.setCurrentExperience(16);
    cut.LevelUp();
    int afterLevelUp = cut.getCurrentLevel();
    ASSERT_EQ(beforeLevelUp+1, afterLevelUp);
}

TEST_F(LevelManagementTests, afterLevelUpWillSetNewCurrentExperience)
{
    cut.setCurrentExperience(21);
    cut.LevelUp();
    int expAfterLevelUp = cut.getCurrentExperience();
    ASSERT_EQ(5, expAfterLevelUp);
}

TEST_F(LevelManagementTests, afterLevelUpWillSetNewExperienceForNextLevel)
{
    cut.setCurrentExperience(16);
    cut.LevelUp();
    int expForNextLevel = cut.getExperienceForNextLevel();
    ASSERT_EQ(103, expForNextLevel);
}