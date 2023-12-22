//
// Created by dell on 20/12/2023.
//

#include "personnages.h"

personnages::personnages(int x, int y) :  elements{x,y}, d_pointVie{100},d_pointForce{100}
{

}
void personnages::setVie(int pointVie) {
    d_pointVie = pointVie;
}

void personnages::setForce(int pointForce) {
    d_pointForce = pointForce;
}

int personnages::pointForce() const {
    return d_pointForce;
}

int personnages::pointVie() const {
    return d_pointVie;
}
