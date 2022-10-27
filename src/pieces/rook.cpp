#include "include\pieces\rook.hpp"

using namespace std;

Rook::Rook(string color, int *spot){
    Piece(color, spot);
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
void Rook::def_possible_movements(){
    int *spot = this->get_spot();
    if (this->get_color() == "white"){
        //Possibilidades ESQUERDA;
        for(int ed = *spot, cb = *(spot+1); ed > -1; ed--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades DIREITA;
        for(int ed = *spot, cb = *(spot+1); ed < 8; ed++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades BAIXO;
        for(int ed = *spot, cb = *(spot+1); cb < 8;cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades CIMA;
        for(int ed = *spot, cb = *(spot+1); cb > -1; cb--)
        _possibles_movements[ed][cb] = 1;
    }

    if (this->get_color() == "black"){
        //Possibilidades ESQUERDA;
        for(int ed = *spot, cb = *(spot+1); ed > -1; ed--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades DIREITA;
        for(int ed = *spot, cb = *(spot+1); ed < 8; ed++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades BAIXO;
        for(int ed = *spot, cb = *(spot+1); cb < 8;cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades CIMA;
        for(int ed = *spot, cb = *(spot+1); cb > -1; cb--)
        _possibles_movements[ed][cb] = 1;
    }
}