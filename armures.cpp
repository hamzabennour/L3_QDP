// armures.cpp
#include "armures.h"

Armure::Armure(int soliditeArmure) : d_solidite(soliditeArmure), d_detruit(false) {}

int Armure::getSolidite() const {
    return d_solidite;
}

bool Armure::estDetruit() const {
    return d_detruit;
}

void Armure::utiliser() {
    if (!d_detruit) {
        d_solidite -= 1;
        if (d_solidite <= 0) {
            d_detruit = true;
        }
    }
}

void Armure::recupererSolidite(int pointsRecuperation) {
    d_solidite += pointsRecuperation;
    d_detruit = false;
}
