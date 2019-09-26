#include <iostream>
#include "../header/Game.hpp"

int main() 
{
    Game game;
    while(game.getPlaying())
    {
        game.mainMenu();
    }
    return 0;
}