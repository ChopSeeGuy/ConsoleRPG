#pragma once
#include "LevelManagement.hpp"


class ExperienceManagement : public LevelManagement
{
public:
    ExperienceManagement();
    ~ExperienceManagement() = default;

    const int& getCurrentExperience() const;
    const int& getExperienceForNextLevel() const;

private:
    int currentExperience_;
    int experienceForNextLevel_;
};