//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_AVENTURIERS_H
#define APP_AVENTURIER_JEU_AVENTURIERS_H

#include "personnages.h"
#include "equipements.h"
#include <vector>
#include <memory>
/*
 * la class aventurier représente je joueur principal du jeu video il hérite de personnage
 * */
class aventuriers : public personnages{

public:
    void affiche() const override;
    void seDeplace() override;
    void attaque() override;
    //est ce que je vais avoir une méthode qui fait un push_back d'équipement, ugh ig;
    void ajouteEquipement(std::unique_ptr<equipements> equipement);
private:
    std::vector<std::unique_ptr<elements>> d_equipements;
};


#endif //APP_AVENTURIER_JEU_AVENTURIERS_H
