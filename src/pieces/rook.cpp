
#include "../../include/pieces/rook.hpp"

using namespace std;

Rook::Rook(string color):Piece(color){
    _name= "Rook";

    if(color == "White"){
        _image = "images/W_Rook.png";
    }else if(color == "Black"){
        _image = "images/B_Rook.png";
    };
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
void Rook::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j]=0;
        }
    };
    
    for (int i=0; i<8; i++){
        _possibles_movements[spot[0]][i]=1;
    };
    for (int j=0; j<8; j++){
        _possibles_movements[j][spot[1]]=1;
    };

    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][spot[1]]= 0; 

}


