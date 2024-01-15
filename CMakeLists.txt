cmake_minimum_required(VERSION 3.26)
project(App_Aventurier_jeu)

set(CMAKE_CXX_STANDARD 14)

add_executable(App_Aventurier_jeu
        TestEpee.cpp
        personnages.h
        personnages.cpp
        aventuriers.h
        aventuriers.cpp
        testaventuriers.h
        testaventuriers.cpp
        ../monstres.h
        ../monstres.cpp
        ../equipements.cpp
        testarmures.cpp
        terrain.cpp
        affichages.h
        card.cpp
        salles.cpp
        testmain.cpp
        testmain.cpp
)
