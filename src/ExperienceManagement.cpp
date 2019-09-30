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
