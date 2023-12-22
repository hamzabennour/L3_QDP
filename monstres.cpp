//
// Created by agbek on 02/12/2023.
//

#include "monstres.h"

int monstres::habilite() {
    return d_habilite;
}
void monstres::estattaque(int f){

    if(pointVie()>f)
        setVie(pointVie()-f);
    else ;//le monstre est détruit
}

//void monstres::attaque(aventuriers &a) {}
