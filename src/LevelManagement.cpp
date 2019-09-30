#include "../header/LevelManagement.hpp"
#include <cmath>


LevelManagement::LevelManagement()
{
    currentLevel_ = 1;
}

void LevelManagement::LevelUp()
{
    int currentExperience = getCurrentExperience();
    int experienceForNextLevel = getExperienceForNextLevel();
    while (currentExperience >= experienceForNextLevel)
    {
        currentExperience -= experienceForNextLevel;
        setCurrentExperience(currentExperience);
        currentLevel_++;
        experienceForNextLevel = 
                (50 / 3)*(pow(currentLevel_,3)) -
                6 * pow(currentLevel_,3) +
                ((17 * currentLevel_) -11);
        setExperienceForNextLevel(experienceForNextLevel);
    }
}

const int& LevelManagement::getCurrentLevel() const
{
    return currentLevel_;
}

