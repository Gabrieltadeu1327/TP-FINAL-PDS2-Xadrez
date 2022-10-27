#include "include\pieces\rook.hpp"

using namespace std;

Rook::Rook(string color, int *spot){
    Piece(color, spot);
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
void Rook::def_possible_movements(){
    int *spot = this->get_spot();

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            _possibles_movements[i][j]=0;
        }
    };

    //caso a peça seja branca

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
    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][*(spot+1)]= 0; 

}