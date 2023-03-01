#include <iostream>
#include "Game.h"

int main(int argc, char const *argv[])
{
    //Init Game engine
    Game game;

    //GameLoop
    while (game.getWindowIsOpen())
    {  
        //update
        game.update();
    
        //render - draws the new window
        game.render();

    }
    
    return 0;
}
