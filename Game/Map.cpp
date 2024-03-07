#include "Map.hpp"

Map::Map(int mapX, int mapY, int mapSize){
    map_X = mapX;
    map_Y = mapY;
    map_Size = mapSize;
}

void Map::draw_Map2D(int map_sqr_Width, int map_sqr_Height)
{
    ClearBackground(DARKGRAY);
    int map[map_Size] 
    {
        1,1,1,1,1,1,1,1, // |
        1,0,1,0,0,0,0,1, // |
        1,0,1,0,0,0,0,1, // |
        1,0,1,0,0,0,0,1, // V
        1,0,0,0,0,0,0,1,
        1,0,0,0,0,1,0,1,
        1,0,0,0,0,0,0,1,
        1,1,1,1,1,1,1,1
    };
    for(y = 0; y < map_Y; y++)
    {
        for(x = 0; x < map_X; x++)
        { 
            xo = x*map_Size;
            yo = y*map_Size;
            if(map[y*map_X+x] == 1){
                DrawRectangle(xo, yo, map_sqr_Width, map_sqr_Height, WHITE);
            }
            else{
                DrawRectangle(xo, yo, map_sqr_Width, map_sqr_Height, BLACK);
            }
        }
    }
}
