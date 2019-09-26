#pragma once
#include <string>


class Character
{
public:
    Character(std::string name,
              int maxHP,
              int currentHP,
              int maxMana,
              int currentMana,
              int currentExperience,
              int experienceForNextLevel,
              int level);

    const std::string& getName() const;
    const int& getMaxHP() const;
    const int& getCurrentHP() const;
    const int& getMaxMana() const;
    const int& getCurrentMana() const;
    const int& getCurrentExperience() const;
    const int& getExperienceForNextLevel() const;
    const int& getLevel() const;



private: 
    std::string name_;
    int maxHP_;
    int currentHP_;
    int maxMana_;
    int currentMana_;
    int currentExperience_;
    int experienceForNextLevel_;
    int level_;
};