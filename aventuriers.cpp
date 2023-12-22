//
// Created by agbek on 02/12/2023.
//

#include "aventuriers.h"


aventuriers::aventuriers(int x, int y): personnages{x,y}, d_equipements{}
{
}
void aventuriers::affiche() const {}
//void aventuriers::seDeplace() {}//c'est plutôt tournerGauche, Droite, Diagonale
void aventuriers::attaque(monstres &m) {
m.estattaque(pointVie());

}
void aventuriers::estAttaque() {}
//void aventuriers::ajouteEquipement(std::unique_ptr<equipements> equipement) {}