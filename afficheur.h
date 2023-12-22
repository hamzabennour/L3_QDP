//
// Created by agbek on 19/12/2023.
//

#ifndef UNTITLED_AFFICHEUR_H
#define UNTITLED_AFFICHEUR_H


#include "card.h"
#include "aventuriers.h"

class afficheur {
public:
    void affichecarte(card &mycarte,position &posactuel)const;
    void afficheuraventurier(aventuriers &myplayer)const;
    void drawEverything(card &mycarte,aventuriers &myplayer,position &posactuel)const;
private:

};


#endif //UNTITLED_AFFICHEUR_H
