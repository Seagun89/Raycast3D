#include "raylib.h"
#include "Map.hpp"
#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
    public:
        Player(float x, float y, float pd_x, float pd_y, float pa, Color color);
        void move_Player();
        void look_Left(float sightAngle, Vector2 sightVector);
        void look_Right(float sightAngle, Vector2 sightVector);
        void draw_Player();
        void draw_Rays();
        
    private:
        Color player_Color;
        Vector2 sightVector;
        Vector2 point;
        float pa; // player angle
        float pdx; // player delta x 
        float pdy; // player delta y
        int rays;
        int mapX;
        int mapY;
        int mapPoint;
        int depthOfField;
        float rayX;
        float rayY;
        float rayAngle;
        float x0;
        float y0;
        float aTan;
};
#endif