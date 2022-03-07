#ifndef ENTETE_H_INCLUDED
#define ENTETE_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#include<SDL/SDL_mixer.h>

typedef struct 
{
  SDL_Surface *map;
  SDL_Surface *aziza;
  SDL_Rect posmap;
  SDL_Rect posaziza ;
int direction;
}minimap;


//declaration des fonction 
void initmap(minimap *m);
SDL_Rect MAJMinimap(SDL_Rect posJoueur , int redimensionnement);
void afficherminimap(minimap m,SDL_Surface *screen ) ;
void Liberer(minimap * m );
void affichertemps(int temps ,SDL_Surface *screen);
int collisionmap (SDL_Surface *masque,SDL_Rect posjoueur,SDL_Surface *joueur,int d);















#endif 
