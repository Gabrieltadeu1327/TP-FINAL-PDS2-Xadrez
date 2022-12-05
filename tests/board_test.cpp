#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../third_party/doctest.h"
#include "../include/board.hpp"


#include <iostream>

bool MatrizIgual(int mat1[8][8], int mat2[8][8]){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(mat1[i][j] != mat2[i][j]){
                return false;
            }
        }
    }
    return true;
}



TEST_CASE("Movimento peão") {
    Board *b = new Board;
    //testa movimento do peão antes e depois de ser movido
    int mat_test[8][8]={{0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,1,0,0,0,0,0,0},
                        {0,1,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0}};
    
    int mat[8][8];
    int spot[2] = {6, 1};
    b->def_valid_moviments(spot, mat);

    CHECK_EQ(true, MatrizIgual(mat_test, mat));

    int spot2[2] = {5, 1};
    //move a peça
    b->set_piece(spot, spot2);
    int mat_test2[8][8]={{0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,1,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0},
                            {0,0,0,0,0,0,0,0}};
    b->def_valid_moviments(spot2, mat);

    CHECK_EQ(true, MatrizIgual(mat_test2, mat));
}


