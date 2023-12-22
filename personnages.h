//
// Created by dell on 20/12/2023.
//

#ifndef APP_AVENTURIER_JEU_PERSONNAGES_H
#define APP_AVENTURIER_JEU_PERSONNAGES_H

#include "elements.h"

class personnages: public elements {
public:
    virtual ~personnages() = default;
    personnages(int x,int y);
    //virtual void attaque()= 0; //qu'est ce qu'elle va prendre comme paramètre ????
    //donc attaque n'est pas une méthode commune car même si le nom est commun
    //le reste ne l'est pas signature + contenu
    //elle prend monstre ou aventurier comme paramètre ?????
    //ah ouais ce n'est pas possible car on a pas les même param pour l'aventurier et pour les monstres
    //that is wild
    void setVie(int pointVie);
    void setForce(int pointForce);
    int pointVie() const;
    int pointForce() const;
    //virtual void estAttaque()=0;//aussi ça attaque de l'adverssaire va appeler ça ????
    //virtual void seDeplace()=0; //je ne sais pas non plus si elle va prendre des paramètres, let's see
    //pas que concernant les paramètres mais aussi concernant le fait qu'il ai un classe avant personnage
    //cette classe qui aura deplace et qui sera abstraite est ce une bonne idée
    //virtual void affiche() const; //wait c'est quoi la convention entre infinitif et le reste
    //oh la réponse c'est qu'il fallait pas mettre virtual affiche ici
    //est ce que elle reste absraite cette classe ou écrivant ça ou bien non ????
    //à confirmer tbh
    //like méthode static ou globale or dont even remember et le reste
    //je pense les méthode ne sont pas à l'infinitif
    //hé hé déja on dois se mettre d'accord sur les valeurs des points de vies et des points de force
    //pour savoir comment les diminuer après chaque attaque
//euh est ce que les monstres peuvent effectuer des attaques avec des forces différentes ???
//d'ailleurs j'ai pas vraiment compris la denière phrase du 5ème paragraphe
//je ne comprend pas comment afficher un personnage
//je pense que l'on doit d'abord faire l'interface après on fait le reste au fur et à mesure, ouais ig
private:
    int d_pointVie;
    int d_pointForce;

};


#endif //APP_AVENTURIER_JEU_PERSONNAGES_H
