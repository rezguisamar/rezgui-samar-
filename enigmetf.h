#ifndef ENIGMETF_H_INCLUDED
#DEFINE ENIGMETF_H_INCLUDE

#include <stdio.h>
#include < stdlib.h>
#include <stdbool.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>

typedef struct{
SDL_Surface *background;
SDL_Surface *question;
SDL_Surface *reponses[3];
SDL_Surface *button;

int pos_selected;
SDL_Rect pos_question;
SDL_Rect pos_reponse1;
SDL_Rect pos_reponse2;
SDL_Rect pos_reponse3;
//int num_question;
 
SDL_Rect pos_reponse1txt;
SDL_Rect pos_reponse2txt;
SDL_Rect pos_reponse3txt;
//int vrai_reponse;
//int positionVraiReponse ;
}enigme;
void InitEnigme(enigme *e);
void afficherEnigme(enigme *e,SDL_Surface *ecran);
int test_enigme(enigme *e);
void verify_enigme(enigme *e,SDL_Surface*ecran);
void animer(enigme *e);
void sauvegarder(personne p,background b, char *nomfichier);
void charger (personne *p,background *b ,char * nomfichier );
void free_Surface_enigme(enigme e);
#endif


 


