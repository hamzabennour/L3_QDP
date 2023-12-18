//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_MONSTRES_H
#define APP_AVENTURIER_JEU_MONSTRES_H

#include "personnages.h"
/*
 * un montres est un personnages du jeu et il y a plusieurs types de monstres
 * abstraite? reflechisons y.
 * */

class monstres : public personnages{

public:
    void attaque()  override;
private:

};


#endif //APP_AVENTURIER_JEU_MONSTRES_H
