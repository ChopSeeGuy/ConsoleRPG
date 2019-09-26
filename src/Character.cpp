#include "../header/Character.hpp"


Character::Character(std::string name,
                     int maxHP,
                     int currentHP,
                     int maxMana,
                     int currentMana,
                     int currentExperience,
                     int experienceForNextLevel,
                     int level) :
            name_(name), 
            maxHP_(maxHP),
            currentHP_(currentHP),
            maxMana_(maxMana),
            currentMana_(currentMana),
            currentExperience_(currentExperience),
            experienceForNextLevel_(experienceForNextLevel),
            level_(level)
            {};

const std::string& Character::getName() const
{
    return name_;
}
const int& Character::getMaxHP() const
{
    return maxHP_;
}

const int& Character::getCurrentHP() const
{
    return currentHP_;
}

const int& Character::getMaxMana() const
{
    return maxMana_;
}

const int& Character::getCurrentMana() const
{
    return currentMana_;
}

const int& Character::getCurrentExperience() const
{
    return currentExperience_;
}

const int& Character::getExperienceForNextLevel() const
{
    return experienceForNextLevel_;
}

const int& Character::getLevel() const
{
    return level_;
}