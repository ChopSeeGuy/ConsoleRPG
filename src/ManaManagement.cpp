#include "../header/ManaManagement.hpp"


ManaManagement::ManaManagement()
{
    maxMana_ = 10;
    currentMana_ = 10;
}

const int& ManaManagement::getCurrentMana() const
{
    return currentMana_;
}

const int& ManaManagement::getMaxMana() const
{
    return maxMana_;
}