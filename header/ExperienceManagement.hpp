#pragma once


class ExperienceManagement
{
public:
    ExperienceManagement();
    ~ExperienceManagement() = default;

    const int& getCurrentExperience() const;
    const int& getExperienceForNextLevel() const;

    void setCurrentExperience(const int& exp);
    void setExperienceForNextLevel(const int& exp);

private:
    int currentExperience_;
    int experienceForNextLevel_;
};