//
// Created by agbek on 19/12/2023.
//
#include "Curses.h"
#include "aventuriers.h"
#include "terrain.h"

int main(void)
{

    terrain mape{10,40,'@',100,50,'#'};
    mape.gamesetup();
    mape.gameloop();

    return 0;
}