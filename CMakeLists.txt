cmake_minimum_required(VERSION 3.26)
project(App_Aventurier_jeu)

set(CMAKE_CXX_STANDARD 14)

add_executable(App_Aventurier_jeu
        elements.h
        elements.cpp
        doctest.h
        TestEpee.cpp
        personnages.h
        personnages.cpp
        aventuriers.h
        aventuriers.cpp
        testaventuriers.h
        testaventuriers.cpp
        monstres.h
        monstres.cpp
)
