//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_AVENTURIERS_H
#define APP_AVENTURIER_JEU_AVENTURIERS_H

#include "personnages.h"
#include "../equipements.h"
#include "../monstres.h"
#include <vector>
#include <memory>
/*
 * la class aventurier représente je joueur principal du jeu video il hérite de personnage
 * */
class aventuriers : public personnages{

public:
    aventuriers(int x, int y);//peut être ajouter un constructeur avec
    //des equipements à la construction ??? franchement jsp let's see
    void affiche() const override;//comment va se faire l'affichage hummm, pour l'instant on appelle la classe afficheur ?
    void attaque(monstres &m);
    void estAttaque();

    int abscisse() const;
    void seDeplace() override;//ça ce n'est pas deplace mais tourner à gauche et à droite
    //est ce que je vais avoir une méthode qui fait un push_back d'équipement, ugh ig;
    void ajouteEquipement(std::unique_ptr<equipement> equipement);
private:
    //est ce que c'est pas mieux de mettre equpiement de defence et equipement d'attaque
    //euh ouais je pense et même mettre une pile c'est mieux
    //donc comment mettre une pile

    // Un aventurier a des equipement de defences et des equipements d'attaque
    std::vector<std::unique_ptr<equipement>> d_equipements;
};


#endif //APP_AVENTURIER_JEU_AVENTURIERS_H
