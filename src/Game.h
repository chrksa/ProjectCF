#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


/*
Class for Game Engine
*/

class Game
{
private:
    //window 
    sf::RenderWindow* window;
    sf::Event ev;
    sf::VideoMode videomode;

    //variables
    int FPS= 60;
    bool lockedFPS= false;

    //private Functions
    void initVariables();
    void initWindow();

public:
    //constructor / deconstructor
    Game(/* args */);
    virtual ~Game();
    //getter
    const bool getWindowIsOpen() const;

    //Functions
    void pollEvents();
    void update();
    void render();
    void setFPS(bool lockedFPS);

};


