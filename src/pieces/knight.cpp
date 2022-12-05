
#include "../../include/pieces/knight.hpp"

using namespace std;

Knight::Knight(string color):Piece(color){
    _name= "Knight";
    
    if(color == "White"){
        _image = "images/W_Knight.png";
    }else if(color == "Black"){
        _image = "images/B_Knight.png";
    };
}

void Knight::def_possible_movements(int* spot){
    
    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j]=0;
        }
    };
    
        for(int ci= -2; ci<3; ci++){
            for(int cj=-2; cj<3; cj++){
            
                if(std::abs(ci)== std::abs(cj) || ci==0 || cj == 0){
                    continue;
                }
                
                if(spot[0] +ci>= 0 && spot[0] +ci <8 &&
                   spot[1] +cj>= 0 && spot[1] +cj<8){
                    _possibles_movements[spot[0]+ci][spot[1]+cj] =1;
                }


            }
    }
    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][*(spot+1)]= 0; 
}


