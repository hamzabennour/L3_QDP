//
// Created by agbek on 02/12/2023.
//
#include <cstdlib>
#include "epees.h"

Epee::Epee(int soliditeEpee) : d_solidite{soliditeEpee}, d_detruit{false} {}

//btenir la solidité de l'équipement.
int Epee::getSolidite() const {
    return d_solidite;
}


// vérifier si l'équipement est détruit
bool Epee::estDetruit() const {
    return d_detruit;
}

//utilisation de l'équipement.
void Epee::utiliser() {
    if (!d_detruit) {
        d_solidite--;  // perd un point à chaque utilisation
        if (d_solidite <= 0) {
            d_detruit = true;
        }
    }
}


//récupérer la solidité de l'équipement.
void Epee::recupererSolidite(int pointsRecuperation) {
    d_solidite += pointsRecuperation;
}


