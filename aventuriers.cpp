//
// Created by agbek on 02/12/2023.
//

#include "aventuriers.h"

void aventuriers::seDeplace() {

}

void aventuriers::ajouteEquipement(std::unique_ptr<equipement> equipement) {

}

aventuriers::aventuriers(int x, int y): personnages{x,y}, d_equipements{}
{
}
void aventuriers::affiche() const {}

int aventuriers::abscisse() const {
    return x();
}

//void aventuriers::seDeplace() {}//c'est plutôt tournerGauche, Droite, Diagonale
void aventuriers::attaque(monstres &m) {
    m.estattaque(pointVie());
}
void aventuriers::estAttaque() {

}
//void aventuriers::ajouteEquipement(std::unique_ptr<equipements> equipement) {}