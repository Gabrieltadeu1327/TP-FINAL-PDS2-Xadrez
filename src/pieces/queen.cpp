#include "include\pieces\queen.hpp"

using namespace std;

Queen::Queen(string color, int*spot){
    Piece(color, spot);
}

void Queen::def_possible_movements(){
    int *spot = this->get_spot();

    if(this->get_color() == "white"){
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

    for(int ed = *spot, cb = *(spot+1); ed < 8 && cb < 8; ed++, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb < 8; ed--, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed < 8 && cb > -1; ed++, cb--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb > -1; ed--, cb--)
        _possibles_movements[ed][cb] = 1;
    }

    if(this->get_color() == "black"){
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

    for(int ed = *spot, cb = *(spot+1); ed < 8 && cb < 8; ed++, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb < 8; ed--, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed < 8 && cb > -1; ed++, cb--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb > -1; ed--, cb--)
        _possibles_movements[ed][cb] = 1;
    }
}