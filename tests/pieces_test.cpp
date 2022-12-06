#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "../third_party/doctest.h"
#include "../include/board.hpp"

#include<string>
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

std::string str = "White";

TEST_CASE("Movimento Peão") {
    Pawn *r = new Pawn(str);
    int spot[2] = {6, 0};
    int mat_test[8][8]={{0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {1,0,0,0,0,0,0,0},
                        {1,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0}};
    r->def_possible_movements(spot);
    
    CHECK_EQ(true, MatrizIgual(mat_test, r->_possibles_movements));

}

TEST_CASE("Movimento Torre") {
    Rook *r = new Rook(str);
    int spot[2] = {4, 3};
    int mat_test[8][8]={{0,0,0,1,0,0,0,0},
                        {0,0,0,1,0,0,0,0},
                        {0,0,0,1,0,0,0,0},
                        {0,0,0,1,0,0,0,0},
                        {1,1,1,0,1,1,1,1},
                        {0,0,0,1,0,0,0,0},
                        {0,0,0,1,0,0,0,0},
                        {0,0,0,1,0,0,0,0}};
    r->def_possible_movements(spot);
    
    CHECK_EQ(true, MatrizIgual(mat_test, r->_possibles_movements));

}

TEST_CASE("Movimento Cavalo") {
    std::string str = "White";
    Knight *p = new Knight(str);
    int spot[2] = {4, 3};
    int mat_test[8][8]={{0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,1,0,1,0,0,0},
                        {0,1,0,0,0,1,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,1,0,0,0,1,0,0},
                        {0,0,1,0,1,0,0,0},
                        {0,0,0,0,0,0,0,0}};
    p->def_possible_movements(spot);
    
    CHECK_EQ(true, MatrizIgual(mat_test, p->_possibles_movements));

}

TEST_CASE("Movimento Bispo") {
    std::string str = "White";
    Bishop *p = new Bishop(str);
    int spot[2] = {4, 3};
    int mat_test[8][8]={{0,0,0,0,0,0,0,1},
                        {1,0,0,0,0,0,1,0},
                        {0,1,0,0,0,1,0,0},
                        {0,0,1,0,1,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,1,0,1,0,0,0},
                        {0,1,0,0,0,1,0,0},
                        {1,0,0,0,0,0,1,0}};
    p->def_possible_movements(spot);
    
    CHECK_EQ(true, MatrizIgual(mat_test, p->_possibles_movements));

}

TEST_CASE("Movimento Rei") {
    std::string str = "White";
    King *p = new King(str);
    int spot[2] = {4, 3};
    int mat_test[8][8]={{0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,1,1,1,0,0,0},
                        {0,0,1,0,1,0,0,0},
                        {0,0,1,1,1,0,0,0},
                        {0,0,0,0,0,0,0,0},
                        {0,0,0,0,0,0,0,0}};
    p->def_possible_movements(spot);
    
    CHECK_EQ(true, MatrizIgual(mat_test, p->_possibles_movements));

}

TEST_CASE("Movimento Rainha") {
    std::string str = "White";
    Queen *p = new Queen(str);
    int spot[2] = {4, 3};
    int mat_test[8][8]={{0,0,0,1,0,0,0,1},
                        {1,0,0,1,0,0,1,0},
                        {0,1,0,1,0,1,0,0},
                        {0,0,1,1,1,0,0,0},
                        {1,1,1,0,1,1,1,1},
                        {0,0,1,1,1,0,0,0},
                        {0,1,0,1,0,1,0,0},
                        {1,0,0,1,0,0,1,0}};
    p->def_possible_movements(spot);
    
    CHECK_EQ(true, MatrizIgual(mat_test, p->_possibles_movements));

}

