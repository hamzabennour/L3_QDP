//
// Created by dell on 21/12/2023.
//

#include "testaventuriers.h"
#include "doctest.h"
#include "aventuriers.h"


TEST_CASE("L'aventurier fonctionne bien") {

    SUBCASE("Les opérations sur la position sont correctes") {
        SUBCASE("Construit un aventurier est correct") {
            aventuriers avent{2, 5};
            REQUIRE_EQ(avent.x(), 2);
            REQUIRE_EQ(avent.y(), 5);
            REQUIRE_EQ(avent.pointVie(), 100);
            REQUIRE_EQ(avent.pointForce(), 100);
        }

    }
}

