#pragma once
#include <string>


class Game 
{
public:
    Game();
    ~Game() = default;

    void mainMenu();

    bool getPlaying() const;

private:
    bool playing_;
};