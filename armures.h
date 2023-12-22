#ifndef ARMURES_H
#define ARMURES_H

#include "equipements.h"

class Armure : public Equipement {
public:
    Armure(int soliditeArmure);

    int getSolidite() const override;
    bool estDetruit() const override;
    void utiliser() override;
    void recupererSolidite(int pointsRecuperation) override;

private:
    int d_solidite;
    bool d_detruit;
};

#endif // ARMURES_H
