
#include "../../include/pieces/king.hpp"

using namespace std;

King::King(string color):Piece(color){
    _name= "King";
    
    if(color == "White"){
        _image = "images/W_King.png";
    }else if(color == "Black"){
        _image = "images/B_King.png";
    };
}

void King::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j]=0;
        }
    };


    for (int i=(spot[0])-1; i<= (spot[0])+1; i++){
        for(int j= spot[1]-1 ; j<= spot[1]+1; j++){
            if(i>=0 && i<8 &&
               j>= 0 && j<8){
                    _possibles_movements[i][j]=1;
               }        
        }
    };

    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][spot[1]]= 0;

}
