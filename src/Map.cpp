#include <iostream>
#include "Map.h"
#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>


Map::Map()
{   
    //default values
    this->mapHeight= 640;
    this->mapWidth=480;
}

Map::Map(int mapSize)
{
    this->mapHeight=mapSize;
    this->mapWidth=mapSize;
}

Map::Map(int mapHeight, int mapWidth)
{
    this->mapHeight=mapHeight;
    this->mapWidth=mapWidth;
}