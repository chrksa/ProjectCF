#include <iostream>
#include "Game.h"

void Game:: initVariables()
{
    this->window=nullptr;
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

void Game::update()
{

}

void Game::render()
{

}