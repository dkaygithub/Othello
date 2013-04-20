#include "SDL/SDL.h"
#include "graphic.h"


int main( int argc, char* args[] )
{
    //Start SDL
    SDL_Init( SDL_INIT_EVERYTHING );


    graphic screen;
    SDL_Event event;

    //hi carolyn


    SDL_Delay(DELAY);

    //menu
    //  1p
    //  2p
    //  settings

    bool done =false;
    while(!done)
    {
        SDL_Delay(DELAY/2);
        while (SDL_PollEvent(&event))
	    {




	    }


    }

    //Quit SDL
    SDL_Quit();

    return 0;

}
