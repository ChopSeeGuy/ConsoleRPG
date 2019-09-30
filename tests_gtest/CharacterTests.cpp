#include <gtest/gtest.h>
#include "../header/Character.hpp"
#include "../header/HPManagement.hpp"
#include "../header/ManaManagement.hpp"
#include "../header/ExperienceManagement.hpp"
#include "../header/LevelManagement.hpp"

struct CharacterTests : testing::Test
{
    HPManagement HP;
    ManaManagement Mana;
    LevelManagement Level;
    ExperienceManagement Exp;
    Character cut {"testName", HP, Mana, Exp, Level};
};

TEST_F(CharacterTests, canGetName)
{
    ASSERT_EQ("testName", cut.getName());
}

TEST_F(CharacterTests, canGetMaxHP)
{
    ASSERT_EQ(10, cut.getMaxHP());
}

TEST_F(CharacterTests, canGetCurrentHP)
{
    ASSERT_EQ(10, cut.getCurrentHP());
}

TEST_F(CharacterTests, canGetMaxMana)
{
    ASSERT_EQ(10, cut.getMaxMana());
}

TEST_F(CharacterTests, canGetCurrentMana)
{
    ASSERT_EQ(10, cut.getCurrentMana());
}

TEST_F(CharacterTests, canGetCurrentExperience)
{
    ASSERT_EQ(0, cut.getCurrentExperience());
}

TEST_F(CharacterTests, canGetExperienceForNextLevel)
{
    ASSERT_EQ(16, cut.getExperienceForNextLevel());
}

TEST_F(CharacterTests, canGetLevel)
{
    ASSERT_EQ(1, cut.getLevel());
}
