cmake_minimum_required(VERSION 3.26)
project(App_Aventurier_jeu_develop)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(App_Aventurier_jeu_develop
        affichages.cpp
        affichages.h
        armures.cpp
        armures.h
        attaques.cpp
        attaques.h
        aventuriers.cpp
        aventuriers.h
        epees.cpp
        epees.h
        equipements.cpp
        equipements.h
        monstres.cpp
        monstres.h
        personnages.cpp
        personnages.h
        terrain.cpp
        terrain.h
        elements.cpp
        monstresvoyants.h
        monstresaveugles.h)
