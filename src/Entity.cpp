#include <iostream>
#include "Game.h"
#include "Entity.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

Entity::Entity()
{
    solid=true;
    speed=0;
    movable=false;
}

Entity::~Entity()
{
    delete this;
}