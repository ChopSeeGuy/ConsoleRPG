#pragma once

class LevelManagement
{
public:
    LevelManagement();
    ~LevelManagement() = default;

    const int& getCurrentLevel() const;
private:
    int currentLevel_;
};
