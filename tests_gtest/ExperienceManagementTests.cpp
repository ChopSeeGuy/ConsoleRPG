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
    ASSERT_EQ(10, cut.getExperienceForNextLevel());
}
