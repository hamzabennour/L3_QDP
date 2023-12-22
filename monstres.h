//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_MONSTRES_H
#define APP_AVENTURIER_JEU_MONSTRES_H

#include "personnages.h"



/*
 * un montres est un personnages du jeu et il y a plusieurs types de monstres
 * abstraite? reflechissons y.
 * */

class monstres : public personnages {

public:
    int habilite();
    //void attaque(aventuriers &a);//prk ça ne reconnait pas alors que j'ai mis ici, bah include mutuel je pense
    void estattaque(int f);
private:
    //il va rien contenir ici à part les points de force ?
    //mais il va me dire ok mais un personnage ça ne sert à rien pour lui d'avoir des points s'il n'est pas attaqué !
    //et qu'il n'agit pas dans le jeux
    int d_habilite;
};


#endif //APP_AVENTURIER_JEU_MONSTRES_H
