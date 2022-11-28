//#define NDEBUG
#include "../../include/pieces/rook.hpp"
//#include <c//assert>

using namespace std;

Rook::Rook(string color):Piece(color){
    _name= "Rook";

    if(color == "White"){
        _image = "src/images/W_Rook.png";
    }else if(color == "Black"){
        _image = "src/images/B_Rook.png";
    };
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
void Rook::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        //assert(0 <= i && i >= 8);
        for(int j=0; j<8; j++){
            //assert(0 <= j && j >= 8);
            _possibles_movements[i][j]=0;
        }
    };
    
    for (int i=0; i<8; i++){
        //assert(0 <= i && i >= 8);
        _possibles_movements[spot[0]][i]=1;
    };
    for (int j=0; j<8; j++){
        //assert(0 <= j && j >= 8);
        _possibles_movements[j][spot[1]]=1;
    };

    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][spot[1]]= 0; 

}



    //caso a peça seja branca
/*
    if (this->get_color() == "white"){
        //Possibilidades ESQUERDA;
        for(int ed = *spot, cb = spot[1]; ed > -1; ed--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades DIREITA;
        for(int ed = *spot, cb = spot[1]; ed < 8; ed++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades BAIXO;
        for(int ed = *spot, cb = spot[1]; cb < 8;cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades CIMA;
        for(int ed = *spot, cb = spot[1]; cb > -1; cb--)
        _possibles_movements[ed][cb] = 1;
    }

    if (this->get_color() == "black"){
        //Possibilidades ESQUERDA;
        for(int ed = *spot, cb = spot[1]; ed > -1; ed--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades DIREITA;
        for(int ed = *spot, cb = spot[1]; ed < 8; ed++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades BAIXO;
        for(int ed = *spot, cb = spot[1]; cb < 8;cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades CIMA;
        for(int ed = *spot, cb = spot[1]; cb > -1; cb--)
        _possibles_movements[ed][cb] = 1;
    }
 */   
