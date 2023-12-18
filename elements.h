//
// Created by dell on 15/12/2023.
//

#ifndef APP_AVENTURIER_JEU_DEVELOP_ELEMENTS_H
#define APP_AVENTURIER_JEU_DEVELOP_ELEMENTS_H

//wait i dont remember why we said element va exister att déja

class elements {
public:
    int x() const;
    int y() const;
    virtual void affiche() const =0;//franchement je ne sais pas trop, est ce qu'on doit afficher
    //un point sans que ce soit forcemment reliés
private:
    int d_x;//wait is this going to be int or double ? i dont even know i'll probably need to check the turtle
    //the turtle lab to get some details and understanding of what we should do, god we aint have a lot of time
    int d_y;

};


#endif //APP_AVENTURIER_JEU_DEVELOP_ELEMENTS_H
