
#include "../../include/pieces/bishop.hpp"

using namespace std;

Bishop::Bishop(string color):Piece(color){
    _name = "Bishop";
    
    if(color == "White"){
        _image = "images/W_Bishop.png";
    }else if(color == "Black"){
        _image = "images/B_Bishop.png";
    };
}

void Bishop::def_possible_movements(int* spot){

    std::cout<< "entrou no bispo\n";
  // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j]=0;
        }
    };


    for(int ci= -1; ci<2; ci++){
            for(int cj=-1; cj<2; cj++){
            
                if(ci ==0 || cj ==0){
                    continue;
                }
                for(int i=spot[0], j= spot[1]; i>=0 && i<8 && j>=0 && j<8; i+= ci, j+= cj){
                        _possibles_movements[i][j]=1;
                    
                }


            }
    }

 std::cout<<"saiu bispo\n";

    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][spot[1]]= 0; 

}
