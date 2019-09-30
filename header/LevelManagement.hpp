#pragma once
#include "ExperienceManagement.hpp"

class LevelManagement : public ExperienceManagement
{
public:
    LevelManagement();
    ~LevelManagement() = default;

    void LevelUp();
    
    const int& getCurrentLevel() const;


private:
    int currentLevel_;
};
