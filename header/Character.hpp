#pragma once
#include <string>
#include "ExperienceManagement.hpp"
#include "LevelManagement.hpp"
#include "ManaManagement.hpp"
#include "HPManagement.hpp"

class Character
{
public:
    Character(std::string name,
              HPManagement HPManagement,
              ManaManagement ManaManagement,
              ExperienceManagement ExperienceManagement,
              LevelManagement LevelManagement);

    const std::string &getName() const;
    const int &getMaxHP() const;
    const int &getCurrentHP() const;
    const int &getMaxMana() const;
    const int &getCurrentMana() const;
    const int &getCurrentExperience() const;
    const int &getExperienceForNextLevel() const;
    const int &getLevel() const;

private:
    std::string name_;
    HPManagement HPManagement_;
    ManaManagement ManaManagement_;
    ExperienceManagement ExperienceManagement_;
    LevelManagement LevelManagement_;
};