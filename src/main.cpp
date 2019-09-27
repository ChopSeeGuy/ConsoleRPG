#include <iostream>
#include "../header/Game.hpp"
#include "../header/ExperienceManagement.hpp"

int main() 
{

    ExperienceManagement exp;
    std::cout << exp.calculateExperienceForNextLevel() << std::endl;

    return 0;
}