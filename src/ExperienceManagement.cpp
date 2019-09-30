#include "../header/ExperienceManagement.hpp"
#include <cmath>


ExperienceManagement::ExperienceManagement()
{
    currentExperience_ = 0;
    experienceForNextLevel_ = 
                (50 / 3)*(pow(1,3)) -
                6 * pow(1,3) +
                ((17 * 1) -11);
}

const int& ExperienceManagement::getCurrentExperience() const
{
    return currentExperience_;
}
const int& ExperienceManagement::getExperienceForNextLevel() const
{
    return experienceForNextLevel_;
}

void ExperienceManagement::setCurrentExperience(const int& exp)
{
    currentExperience_ = exp;
}

void ExperienceManagement::setExperienceForNextLevel(const int &exp)
{
    experienceForNextLevel_ = exp;
}
