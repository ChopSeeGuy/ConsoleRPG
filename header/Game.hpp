#pragma once

class Game 
{
public:
    Game() = default;
    ~Game() = default;
    bool getPlaying() const;

private:
    bool playing_ = true;
};