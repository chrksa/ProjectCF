#pragma once

class Map
{
private:
    /* data */
    int mapHeight;
    int mapWidth;
    
public:
    Map(/* args */);
    Map(int mapHeight, int mapWidth);
    Map(int mapSize);
    ~Map();
};
