#include "raylib.h"
#include "Player.hpp" 
#include "Map.hpp"
#include <cmath>
#include <iostream>

Player::Player(float x, float y, float pd_x, float pd_y, float pa, Color color)
{
    pdx = pd_x;
    pdy = pd_y;
    player_Color = color;
    point = {x, y};
}

void Player::draw_Player()
{
    DrawCircleV(point, 5.0f, player_Color); // player
    DrawCircle(point.x, point.y, 1.0f, RED); // center of player
    DrawLineV((Vector2){point.x, point.y},(Vector2){point.x + pdx, point.y + pdy}, GREEN); // sight line
    //draw_Rays();
}

void Player::draw_Rays()
{
    rayAngle = pa;
    
    for(rays = 0; rays < 1; rays++)
    {
        //checking for horizontal lines in map
        depthOfField = 0;
        aTan = -1/tan(rayAngle); // the negation of arctan is due to inversion of y-axis in computer graphics
        if (rayAngle > PI) 
        {
            rayY = ((static_cast<int>(point.y) >> 6) << 6) - 1; // Using Quantization, Equivalent to point.y / 64 * 64 to get in base 2^6
            rayX = (point.y - rayY) * aTan + point.x;
            y0 = -64; // next rayY hit by ray
            x0 = -y0 * aTan; // next rayX hit by ray 
        }
    }
}
void Player::move_Player()
{
    // formula for moving point along vector angle 
    // x1 = x + cos(ang) * distance;
    // y1 = y + sin(ang) * distance;
    if (IsKeyDown(KEY_A))
    {
        pa -= 0.1f;
        if(pa < 0) 
        {
            pa += 2*PI;
        }
        pdx = cos(pa) * 10;  // 10 value is distance 
        pdy = sin(pa) * 10;   
    }   
    if (IsKeyDown(KEY_D))
    { 
        pa += 0.1f;
        if(pa > 2*PI) 
        {
            pa -= 2*PI;
        }
        pdx = 10 * cos(pa);     
        pdy = 10 * sin(pa); 
        
    }
    if (IsKeyDown(KEY_W))
    {
        point.y += pdy/2;
        point.x += pdx/2;
    }
    if (IsKeyDown(KEY_S))
    {
        point.y -= pdy/2;
        point.x -= pdx/2;
    }
    
}

void Player::look_Left(float pa, Vector2 sightVector)
{
    /*pa -= 0.1f;
    if(pa < 0)
    {
        pa += 2*PI;
    }
    sightVector.x = cos(pa); // calculates the x-component of the vector using the cosine of the angle "pa." 
    sightVector.y = sin(pa); // calculates the y-component of the vector using the sine of the angle "pa."*/
}

void Player::look_Right(float pa, Vector2 sightVector)
{
    /*pa += 0.1f;
    if(pa < 2*PI)
    {
        pa -= 2*PI;
    }
    sightVector.x = cos(pa); // calculates the x-component of the vector using the cosine of the angle "pa." 
    sightVector.y = sin(pa); // calculates the y-component of the vector using the sine of the angle "pa."*/

}