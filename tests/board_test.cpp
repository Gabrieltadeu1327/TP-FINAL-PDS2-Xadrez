#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#define CHECK_THROWS
#include "../third_party/doctest.h"
#include "../include/board.hpp"

#include <iostream>

TEST_CASE("Testando Matrizes") {
    
    Board *b = new Board();
    int mat[8][8]={{0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,1,0,0,0,0,0,0},
                   {0,1,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0},
                   {0,0,0,0,0,0,0,0}};
    
    int spot[2];
    spot[0] = 6;//linha
    spot[1] = 2;//coluna

    int mat_function[8][8];
    b->def_valid_moviments(spot,mat_function);

    for(int i= 0; i<8; i++){
        for(int j= 0; j<8; j++){
            CHECK_EQ(mat_function[i][j],mat[i][j]);
        }
    }

    //CHECK_THROWS(p != nullptr);
}


