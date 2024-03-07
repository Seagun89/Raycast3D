#include "raylib.h"
#include "Player.hpp"
#include "Map.hpp"
#include <math.h>
//------------------------------------------------------------------------------------
// Program main entry point
//------------------------------------------------------------------------------------

int main(void)
{
    float player_X = 300.0f;
    float player_Y = 300.0f;
    float pa = 0.0f;
    float pd_x = cos(pa) * 10;       
    float pd_y = sin(pa) * 10; 
    int map_X = 8;
    int map_Y = 8;
    int map_Size = 64;
    int map_sqr_Width = 60;
    int map_sqr_Height = 60;
    // Initialization
    //--------------------------------------------------------------------------------------
    const int screenWidth = 1024;
    const int screenHeight = 512;

    Player player(player_X, player_Y, pd_x, pd_y, pa, YELLOW);
    Map map(map_X, map_Y, map_Size);

    InitWindow(screenWidth, screenHeight, "Hell's door");
    
    SetTargetFPS(300);               // Set our game to run at 60 frames-per-second
    //--------------------------------------------------------------------------------------
    // Main game loop
    while (!WindowShouldClose())    // Detect window close button or ESC key
    {
        // Dont put player draw into beginDrawing or else it becomes lines drawn not point
        // Update
        //----------------------------------------------------------------------------------
        // TODO: Update your variables here
        player.move_Player();
        BeginDrawing();
        //----------------------------------------------------------------------------------
        // Draw
        //----------------------------------------------------------------------------------
        map.draw_Map2D(map_sqr_Width, map_sqr_Height);
        player.draw_Player();
            
        EndDrawing();
        //----------------------------------------------------------------------------------
    }

    // De-Initialization
    //--------------------------------------------------------------------------------------
    CloseWindow();        // Close window and OpenGL context
    //--------------------------------------------------------------------------------------

    return 0;
}