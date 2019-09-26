#include "../header/Game.hpp"
#include <iostream>


Game::Game()
{
    playing_ = true;
}

void Game::mainMenu()
{
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "1. New game" << std::endl;
    std::cout << "2. Quit" << std::endl;

    std::cout << "Choice: ";

    switch(char choice (getchar()); choice)
    {
        case '2':
            playing_ = false;
            break;
        default:
            break;
    }
}

bool Game::getPlaying() const
{
    return playing_;
}

