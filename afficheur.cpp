//
// Created by agbek on 19/12/2023.
//
/*ceci est une classe de teste pour gerer temporairement les affichage*/
#include "afficheur.h"

void afficheur::affichecarte(card &mycarte,position &posactuel) const {

    for (int y = 0; y < mycarte.largeur(); y++)
    {
        for (int x = 0; x < mycarte.longeur(); x++)
        {
            mvaddch(y, x, mycarte.carte()[y][x].caractere());
        }
    }
}

void afficheur::afficheuraventurier(aventuriers &myplayer) const {
    mvaddch(myplayer.x(),myplayer.y(),myplayer.carac());
}

void afficheur::drawEverything(card &mycarte,aventuriers &myplayer,position &posactuel) const {
    clear();
    affichecarte(mycarte,posactuel);
    afficheuraventurier(myplayer);
}
