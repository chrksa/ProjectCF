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

};

Game::Game(/* args */)
{
}

Game::~Game()
{
}
