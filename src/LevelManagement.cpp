#include "../header/LevelManagement.hpp"

LevelManagement::LevelManagement()
{
    currentLevel_ = 1;
}

const int& LevelManagement::getCurrentLevel() const
{
    return currentLevel_;
}