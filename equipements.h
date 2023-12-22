//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_EQUIPEMENTS_H
#define APP_AVENTURIER_JEU_EQUIPEMENTS_H

/*
 * les equipements qui peuvent appartenir soit a l'aventurier ou aux monstres
 * class abstraite
 * */

class Equipement {
public:
    virtual ~Equipement() = default;
    virtual int getSolidite() const = 0;
    virtual bool estDetruit() const = 0;
    virtual void utiliser() = 0;
    virtual void recupererSolidite(int pointsRecuperation) = 0;
};



#endif //APP_AVENTURIER_JEU_EQUIPEMENTS_H
