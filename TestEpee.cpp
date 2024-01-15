//#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../epees.h"

TEST_CASE("Epee - Tests") {
    SUBCASE("Initialisation") {
        Epee epee{10};
        CHECK(epee.getSolidite() == 10);
        CHECK_FALSE(epee.estDetruit());
    }

    SUBCASE("Utilisation") {
        SUBCASE("Utilisation normale") {
            Epee epee{3};
            epee.utiliser();
            CHECK(epee.getSolidite() == 2);
            CHECK_FALSE(epee.estDetruit());
        }

        SUBCASE("Utilisation jusqu'à destruction") {
            Epee epee{1};
            epee.utiliser();
            CHECK(epee.estDetruit());
        }
    }

    SUBCASE("Récupération de solidité") {
        Epee epee{5};
        epee.utiliser();
        epee.recupererSolidite(3);
        CHECK(epee.getSolidite() == 7);
        CHECK_FALSE(epee.estDetruit());
    }
}