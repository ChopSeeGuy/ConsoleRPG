#pragma once

class ManaManagement
{
public:
    ManaManagement();
    ~ManaManagement() = default;

    const int& getCurrentMana() const;
    const int& getMaxMana() const;
    
private:
    int maxMana_;
    int currentMana_;
};