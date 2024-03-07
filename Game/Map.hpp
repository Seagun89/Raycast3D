#include "raylib.h"
#ifndef MAP_HPP
#define MAP_HPP

class Map {
    public:
        Map(int mapX, int mapY, int map_Size);
        void draw_Map2D(int map_sqr_Width, int map_sqr_Height);
    private:
        int map_X;
        int map_Y;
        int map_Size;
        int x, y, xo, yo;
};
#endif