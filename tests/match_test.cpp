#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../third_party/doctest.h"
#include "../include/match.hpp"
#include <iostream>


TEST_CASE("Exeção game()"){
    
    SUBCASE("spot inválido"){
        Match *mat = new Match();
        int spot[2] = {-1, -1};
        CHECK_THROWS(mat->game(spot));
    }

    SUBCASE("spot void"){
        Match *mat = new Match();
        int spot[2] = {4, 4};
        CHECK_THROWS(mat->game(spot));
    }
    SUBCASE("spot not turn"){
        Match *mat = new Match();
        int spot[2] = {0, 0};
        CHECK_THROWS(mat->game(spot));
    }
    SUBCASE("spot preso"){
        Match *mat = new Match();
        int spot[2] = {7, 0};
        CHECK_THROWS(mat->game(spot));
    }
    SUBCASE("destino inválido"){
        Match *mat = new Match();
        int spot[2] = {6, 0};
        mat->game(spot);
        int spot2[2] = {6, 4};
        CHECK_THROWS(mat->game(spot2));
    }
    
}
