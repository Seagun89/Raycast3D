#include "raylib.h"
#ifndef PLAYER_HPP
#define PLAYER_HPP

class Player {
    public:
        Player(float x, float y, float pd_x, float pd_y, float pa, Color color);
        void move_Player();
        void look_Left(float sightAngle, Vector2 sightVector);
        void look_Right(float sightAngle, Vector2 sightVector);
        void draw_Player();
        float pa;

    private:
        Color player_Color;
        Vector2 point;
        Vector2 sightVector;
        float pdx;
        float pdy;
        
};
#endif