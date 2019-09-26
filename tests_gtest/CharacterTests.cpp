#include <gtest/gtest.h>
#include "../header/Character.hpp"

struct CharacterTests : testing::Test
{
    std::string name = "testName";
    int maxHP = 10;
    int currentHP = 10;
    int maxMana = 10;
    int currentMana = 10;
    int currentExperience = 0;
    int experienceForNextLevel = 10;
    int level = 1;
    Character character{"testName", 
                        maxHP, 
                        currentHP, 
                        maxMana, 
                        currentMana, 
                        currentExperience, 
                        experienceForNextLevel, 
                        level
                        };
};

TEST_F(CharacterTests, canGetName)
{
    ASSERT_EQ(name, character.getName());
}

TEST_F(CharacterTests, canGetMaxHP)
{
    ASSERT_EQ(maxHP, character.getMaxHP());
}

TEST_F(CharacterTests, canGetCurrentHP)
{
    ASSERT_EQ(currentHP, character.getCurrentHP());
}

TEST_F(CharacterTests, canGetMaxMana)
{
    ASSERT_EQ(maxMana, character.getMaxMana());
}

TEST_F(CharacterTests, canGetCurrentMana)
{
    ASSERT_EQ(currentMana, character.getCurrentMana());
}

TEST_F(CharacterTests, canGetCurrentExperience)
{
    ASSERT_EQ(currentExperience, character.getCurrentExperience());
}

TEST_F(CharacterTests, canGetExperienceForNextLevel)
{
    ASSERT_EQ(experienceForNextLevel, character.getExperienceForNextLevel());
}

TEST_F(CharacterTests, canGetLevel)
{
    ASSERT_EQ(level, character.getLevel());
}