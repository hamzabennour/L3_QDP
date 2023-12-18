//
// Created by agbek on 02/12/2023.
//

#ifndef APP_AVENTURIER_JEU_PERSONNAGES_H
#define APP_AVENTURIER_JEU_PERSONNAGES_H

/*
 * Ici nous avons la classe abstraite personnage qui vas représenter tout les personnages du
 * jeu vidéo
 * */
#include "elements.h"

class personnages: public elements {
public:
    virtual void attaque()= 0; //qu'est ce qu'elle va prendre comme paramètre ????
    //elle prend monstre ou aventurier comme paramètre ?????
    //fuck ce n'est pas possible car on a pas les même param pour l'aventurier et pour les monstres
    //that is wild
    virtual void estattaque()=0;//aussi ça attaque de l'adverssaire va appeler ça ????
    virtual void seDeplace()=0; //je ne sais pas non plus si elle va prendre des paramètres, let's see
    //pas que concernant les paramètres mais aussi concernant le fait qu'il ai un classe avant personnage
    //cette classe qui aura deplace et qui sera abstraite est ce une bonne idée
    virtual void affiche() const; //wait c'est quoi la convention entre infinitif et le reste
    //est ce que elle reste absraite cette classe ou écrivant ça ou bien non ????
    //à confirmer tbh
    //like méthode static ou globale or dont even remember et le reste
    //je pense les méthode ne sont pas à l'infinitif
    //fuck déja on dois se mettre d'accord sur les valeurs des points de vies et des points de force
    //pour savoir comment les diminuer après chaque attaque
//fuck est ce que les monstres peuvent effectuer des attaques avec des forces différentes ???
//tbh this is kinda fucked up
//d'ailleurs j'ai pas vraiment compris la denière phrase du 5ème paragraphe
//je ne comprend pas comment afficher un personnage
//je pense que l'on doit d'abord faire l'interface après on fait le reste au fur et à mesure, ouais ig
private:
    int d_pointVie;
    int d_pointForce;

};


#endif //APP_AVENTURIER_JEU_PERSONNAGES_H
