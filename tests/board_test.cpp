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

TEST_CASE("Exeção set_piece()"){
    Board *b = new Board;
    int spot1[2] = {4, 4};
    int spot2[2] = {4, 6};
    CHECK_THROWS(b->set_piece(spot1, spot2));

}

TEST_CASE("Exeção valid_mov()"){
    Board *b = new Board;
    int spot1[2] = {4, 4};
    int spot2[2] = {4, 6};
    CHECK_THROWS(b->set_piece(spot1, spot2));

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

TEST_CASE("Promoção"){
    Board *b = new Board();
    int spot1[2] = {6, 2};
    int spot2[2] = {0, 2};

    b->set_piece(spot1, spot2);
    CHECK_EQ(b->get_piece(spot2)->get_name(), "Queen");
}

TEST_CASE("Rook"){
    Board *b = new Board();
    int spot1[2] = {7, 1};
    int spot2[2] = {7, 2};
    int spot3[2] = {7, 3};
    int spotr[2] = {7, 4};
    int spotf[2] = {6, 0};
    b->set_piece(spot1, spotf);
    b->set_piece(spot2, spotf);
    b->set_piece(spot3, spotf);
    b->set_piece(spotr, spot2);

    CHECK_EQ(b->get_piece(spot2)->get_name(), "King");
    CHECK_EQ(b->get_piece(spot3)->get_name(), "Rook");


}