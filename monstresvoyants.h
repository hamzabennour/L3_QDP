//
// Created by dell on 15/12/2023.
//

#ifndef APP_AVENTURIER_JEU_DEVELOP_MONSTRESVOYANTS_H
#define APP_AVENTURIER_JEU_DEVELOP_MONSTRESVOYANTS_H
#include "monstres.h"

class monstresvoyants : public monstres {
public:
    void seDeplace() override;
    void affiche() const override;
private:

};


#endif //APP_AVENTURIER_JEU_DEVELOP_MONSTRESVOYANTS_H