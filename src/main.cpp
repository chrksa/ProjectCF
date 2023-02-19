#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include "Game.h"

int main(int argc, char const *argv[])
{
    //Game init
    Game game();

    //GameLoop
    while (Game::getWindowIsOpen)
    {
        while (window.pollEvent(ev))
        {
            switch (ev.type)
            {
            case sf::Event::Closed:
                //maybe a window with -- are you sure you wann leave the game?
                window.close();
                break;
            case sf::Event::KeyPressed:
                if(ev.key.code == sf::Keyboard::Escape)
                    window.close();

                break;
            default:
                break;
            }
        }
        
        //update

    
        //render
        window.clear();//clear old frame
        /*
        Draw here
        */
        window.display(); //update new frame

    }
    
    return 0;
}
