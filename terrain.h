//
// Created by agbek on 19/12/2023.
//

#ifndef UNTITLED_TERRAIN_H
#define UNTITLED_TERRAIN_H
#include "aventuriers.h"
#include "card.h"
#include "afficheur.h"

class terrain {
public:
    //constructeur de terrain
    terrain(int x,int y,char carac,int width,int height,char ch);
    //methode pour charger les configuration du jeu
    void gamesetup() ;
    //la boucle dans laquel le jeu se déroulr
    void gameloop() ;
    //la methodes pour cloture du jeu
    ~terrain();
private:
    //l'aventurier
    aventuriers player;
    //la carte
    card d_card;
    //l'afficheur
    afficheur d_draw;
};


#endif //UNTITLED_TERRAIN_H
