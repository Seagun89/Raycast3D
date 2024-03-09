#include "raylib.h"
#include "Player.hpp" 
#ifndef RAYCAST_HPP
#define RAYCAST_HPP

class Raycast{
    public:
        void draw_Rays3D();
        int rays;
        int mapX;
        int mapY;
        int mapPoint;
        int depthOfField;
        float rayX;
        float rayY;
        float rayAngle;
        float initialX;
        float initialY;
        
}