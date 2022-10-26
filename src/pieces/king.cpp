#include "include\pieces\king.hpp"

using namespace std;

King::King(string color, int*spot){
    Piece(color, spot);
}

void King::def_possible_movements(){
    int *spot = this->get_spot();

    if(this->get_color() == "white"){
        //Possibilidades Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && count < 2; ed--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Baixo;
        for(int ed = *spot, cb = *(spot+1), count  = 0; ed < 8 && count < 2; ed++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Direita;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb < 8 && count < 2;cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Esquerda;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb > -1 && count < 2; cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

         //Possibilidades Diagonal pra Direita e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb < 8 && count < 2; ed++, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra Direita e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb < 8 && count < 2; ed--, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb > -1 && count < 2; ed++, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb > -1 && count < 2; ed--, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
    }

    if(this->get_color() == "black"){
        //Possibilidades Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && count < 2; ed--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Baixo;
        for(int ed = *spot, cb = *(spot+1), count  = 0; ed < 8 && count < 2; ed++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Direita;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb < 8 && count < 2;cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Esquerda;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb > -1 && count < 2; cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

         //Possibilidades Diagonal pra Direita e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb < 8 && count < 2; ed++, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra Direita e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb < 8 && count < 2; ed--, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb > -1 && count < 2; ed++, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb > -1 && count < 2; ed--, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
    }