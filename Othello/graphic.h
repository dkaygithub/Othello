/*
 * graphic.h
 *
 *  Created on: Mar 13, 2013
 *      Author: booth
 */

#ifndef GRAPHIC_H_
#define GRAPHIC_H_

#include "SDL/SDL.h"

const int ROW   = 480;
const int COL   = 640;
const int DELAY = 1000;


class graphic{
     private:
    	 SDL_Surface *screen;

     public:
    	 graphic();
    	 void update();
    	 void clear();
    	 void plotPixel(int x, int y, int color);
    	 void display(int data[], int s);
};


#endif /* GRAPHIC_H_ */
