#include "include\pieces\bishop.hpp"

using namespace std;

Bishop::Bishop(string color){
    Piece(color);
    _name= "Bishop";
}

void Bishop::def_possible_movements(int* spot){

  // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            _possibles_movements[i][j]=0;
        }
    };

    if(this->get_color() == "white"){
        //Possibilidades Diagonal pra DIREITA e pra CIMA;
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
        //Possibilidades Diagonal pra DIREITA e pra CIMA;
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
    
    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][*(spot+1)]= 0; 

}
