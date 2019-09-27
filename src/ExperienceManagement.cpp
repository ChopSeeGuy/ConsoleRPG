#include "../header/ExperienceManagement.hpp"
#include <complex>

ExperienceManagement::ExperienceManagement()
{
    currentExperience_ = 0;
    experienceForNextLevel_ = 10;
}

const int& ExperienceManagement::getCurrentExperience() const
{
    return currentExperience_;
}
const int& ExperienceManagement::getExperienceForNextLevel() const
{
    return experienceForNextLevel_;
}

double ExperienceManagement::calculateExperienceForNextLevel()
{
    // TODO 
    // make algorithm for increasing experience required
    // for next level as balanced as it is possible
    return getCurrentLevel() * std::log(getCurrentLevel()) + 10;
}

void ExperienceManagement::setExperienceForNextLevel()
{
    experienceForNextLevel_ = calculateExperienceForNextLevel();
}