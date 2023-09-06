#include <raylib.h>
#include "Game.hpp"

#define GLSL_VERSION  330

int main()
{
    SetConfigFlags(FLAG_MSAA_4X_HINT);
    InitWindow(1280, 720, "The Last Cossack");
    SetTargetFPS(GetMonitorRefreshRate(GetCurrentMonitor()));
    //ToggleFullscreen();

    Game game(true);

    while (!WindowShouldClose())
    {
        game.runApplication();
    }
    
    return 0;
}