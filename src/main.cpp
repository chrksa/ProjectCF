#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
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
