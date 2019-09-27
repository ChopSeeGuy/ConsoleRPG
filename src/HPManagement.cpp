#include "../header/HPManagement.hpp"


HPManagement::HPManagement()
{
    maxHP_ = 10;
    currentHP_ = 10;
}

const int& HPManagement::getMaxHP() const
{
    return maxHP_;
}

const int& HPManagement::getCurrentHP() const
{
    return currentHP_;
}
