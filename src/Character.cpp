#include "../header/Character.hpp"

Character::Character(std::string name,
                     HPManagement HPManagement,
                     ManaManagement ManaManagement,
                     ExperienceManagement ExperienceManagement,
                     LevelManagement LevelManagement) : 
            name_(name),
            HPManagement_(HPManagement),
            ManaManagement_(ManaManagement),
            ExperienceManagement_(ExperienceManagement),
            LevelManagement_(LevelManagement){};

const std::string &Character::getName() const
{
    return name_;
}
const int &Character::getMaxHP() const
{
    return HPManagement_.getMaxHP();
}

const int &Character::getCurrentHP() const
{
    return HPManagement_.getCurrentHP();
}

const int &Character::getMaxMana() const
{
    return ManaManagement_.getMaxMana();
}

const int &Character::getCurrentMana() const
{
    return ManaManagement_.getCurrentMana();
}

const int &Character::getCurrentExperience() const
{
    return ExperienceManagement_.getCurrentExperience();
}

const int &Character::getExperienceForNextLevel() const
{
    return ExperienceManagement_.getExperienceForNextLevel();
}

const int &Character::getLevel() const
{
    return LevelManagement_.getCurrentLevel();
}