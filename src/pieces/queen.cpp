#include "../../include/pieces/queen.hpp"

using namespace std;

Queen::Queen(std::string color):Piece(color){
    _name= "Queen";

    if(color == "White"){
        _image = "images/W_Queen.png";
    }else if(color == "Black"){
        _image = "images/B_Queen.png";
    };
}

void Queen::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j]=0;
        }
    };

       for(int ci= -1; ci<2; ci++){
            for(int cj=-1; cj<2; cj++){
            
                if(ci ==0 && cj ==0){
                    continue;
                }
                
                for(int i=spot[0], j= spot[1]; i>=0 && i<8 && j>=0 && j<8; i+= ci, j+= cj){
                        
                        _possibles_movements[i][j]=1;
                    
                }


            }
    }

    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][spot[1]]= 0; 
}

