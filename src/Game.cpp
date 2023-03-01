#include <iostream>
#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

void Game::initVariables()
{
    this->window=nullptr; // initialize window
}

void Game::initWindow()
{
    this->videomode.height=640;
    this->videomode.width=480;
    
    this->window=new sf::RenderWindow (this->videomode, "ProjectCF", sf::Style::Titlebar | sf::Style::Close );

}
//getter
const bool Game::getWindowIsOpen() const
{
    return this->window->isOpen();
}


//constructor
Game::Game()
{
    this->initVariables();
    this->initWindow();
}
//deconstructor
Game::~Game()
{
    delete this->window;
}

void Game::pollEvents()
{
    while (this->window->pollEvent(this->ev))
        {
            switch (this->ev.type)
            {
            case sf::Event::Closed:
                //maybe a window with -- are you sure you wann leave the game?
                this->window->close();
                break;
            case sf::Event::KeyPressed:
                if(ev.key.code == sf::Keyboard::Escape)
                    this->window->close();

                break;
            default:
                break;
            }
        }
}


void Game::update()
{
    this->pollEvents();
}

void Game::render()
{   
    /*
    Renders game objects
    -clear widnow 
    -render objects
    -display frame in window
    */

    this->window->clear(sf::Color(255,0,0,255));

    //Draw game objects here

    this->window->display();
}