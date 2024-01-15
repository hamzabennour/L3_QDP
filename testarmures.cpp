#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "../armures.h"

TEST_CASE("Test de la classe Armure") {
    SUBCASE("Test du constructeur") {
        Armure armure(10);  // Crée une armure avec une solidité initiale de 10
        CHECK(armure.getSolidite() == 10);
        CHECK_FALSE(armure.estDetruit());
    }

    SUBCASE("Test de la méthode utiliser") {
        Armure armure(10);
        armure.utiliser();
        CHECK(armure.getSolidite() == 9);
        CHECK_FALSE(armure.estDetruit());
    }

    SUBCASE("Test de la méthode recupererSolidite") {
        Armure armure(10);
        armure.recupererSolidite(5);
        CHECK(armure.getSolidite() == 15);
        CHECK_FALSE(armure.estDetruit());
    }

    SUBCASE("Test de la destruction de l'armure") {
        Armure armure(1);
        armure.utiliser(); // L'armure devrait être détruite après cela
        CHECK(armure.estDetruit());// Vérification que l'armure est détruite après avoir utilisé
    }
}
