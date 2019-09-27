#pragma once

class HPManagement
{
public:
    HPManagement();
    ~HPManagement() = default;

    const int& getMaxHP() const;
    const int& getCurrentHP() const;

private:
    int maxHP_;
    int currentHP_;
};