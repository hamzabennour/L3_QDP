//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_EPEES_H
#define APP_AVENTURIER_JEU_EPEES_H

#include "equipements.h"

/*
 * une epee est un equipement des personnage du jeu elle herite donc de la class equipement
 * */

class Epee : public Equipement {
public:
    Epee(int soliditeEpee);

    int getSolidite() const override;
    bool estDetruit() const override;
    void utiliser() override;
    void recupererSolidite(int pointsRecuperation) override;

private:
    int d_solidite;
    bool d_detruit;
};




#endif //APP_AVENTURIER_JEU_EPEES_H
