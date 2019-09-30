#include <gtest/gtest.h>
#include "../header/ExperienceManagement.hpp"

struct ExperienceManagementTests : testing::Test
{
    ExperienceManagement cut;
};

TEST_F(ExperienceManagementTests, canGetCurrentExperience)
{
    ASSERT_EQ(0, cut.getCurrentExperience());
}

TEST_F(ExperienceManagementTests, canGetExperienceForNextLevel)
{
    ASSERT_EQ(16, cut.getExperienceForNextLevel());
}

TEST_F(ExperienceManagementTests, canSetCurrentExperience)
{
    cut.setCurrentExperience(5);
    int newExperience = cut.getCurrentExperience();
    ASSERT_EQ(5, newExperience);
}

TEST_F(ExperienceManagementTests, canSetExperienceForNextLevel)
{
   cut.setExperienceForNextLevel(15);
   int currentExperienceForNextLevel = cut.getExperienceForNextLevel();
   ASSERT_EQ(15, currentExperienceForNextLevel);
}