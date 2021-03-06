#ifndef _CSURFACE_H_
#define _CSURFACE_H_

#include "SDL.h"
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"
#include <iostream>
using namespace std;


class CSurface {
	public :
		CSurface();

		static SDL_Surface* onLoad(char* File);
		static bool onDraw(SDL_Surface* ecran, SDL_Surface* source, int x, int y);
		static bool onDraw(SDL_Surface* ecran, SDL_Surface* source, int x, int y, int x2, int y2, int width, int heigth);
		static bool transparent(SDL_Surface* surface, int r, int g, int b);
		static SDL_Surface* surfacePolice(string file, int size, string text, SDL_Color couleur);
        static void collage(SDL_Surface* source, SDL_Surface* destination = NULL, int destinationX = 0, int destinationY = 0);
        static void collage(SDL_Surface* source, SDL_Surface* destination = NULL, int destinationX = 0, int destinationY = 0, int sourceX = 0, int sourceY = 0, int sourceH = 0, int sourceW = 0);


};

#endif
