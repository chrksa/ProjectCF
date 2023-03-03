#include <iostream>
#include <chrono>
#include "Game.h"

int main(int argc, char const *argv[])
{   

    std::chrono::high_resolution_clock::time_point start;
    std::chrono::high_resolution_clock::time_point end;
    float fps;
    //Init Game engine
    Game game;
    //GameLoop
    while (game.getWindowIsOpen())
    {  
        start= std::chrono::high_resolution_clock::now();
        //update
        game.update();
        
        //render - draws the new window
        game.render();
        end= std::chrono::high_resolution_clock::now();
        
    }
    
    return 0;
}
