//#define NDEBUG
#include "../../include/pieces/pawn.hpp"
//#include <c//assert>
#include<string>


using namespace std;

Pawn::Pawn(std::string color):Piece(color){
    _name= "Pawn";
     
    if(color == "White"){
        _image = "src/images/W_Pawn.png";
    }else if(color == "Black"){
        _image = "src/images/B_Pawn.png";
    };
}

//No caso do pe�o define os movimentos possiveis como duas casas a frente caso seja seu primeiro movimento ou uma casa a frente caso n�o seja
void Pawn::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<9; i++){
        //assert(0 <= i && i >= 9);
        for(int j=0; j<9; j++){
            //assert(0 <= j && j >= 9);
            _possibles_movements[i][j]=0;
        }
    };

    if(this->get_color() == "Black" && _first_time == true){
        _possibles_movements[spot[0]-1][spot[1]] = 1;
        _possibles_movements[spot[0]-2][spot[1]] = 1;
        if(spot[0] <7){
            _possibles_movements[spot[0]-1][spot[1] +1] = 1;
        }
        if(spot[0] >0){
            _possibles_movements[spot[0] -1][spot[1] - 1] = 1;
        }

    }
    if(this->get_color() == "Black" && _first_time == false){
        _possibles_movements[spot[0]-1][spot[1]] = 1;
         if(spot[0] <7){
            _possibles_movements[spot[0]-1][spot[1] + 1] = 1;
        }
        if(spot[0] >0){
            _possibles_movements[spot[0] -1][spot[1] - 1] = 1;
        }

    }
    if(this->get_color() == "white" && _first_time == true){
        _possibles_movements[spot[0]+1][spot[1]] = 1;
        _possibles_movements[spot[0]+2][spot[1]] = 1;
         if(spot[0] <7){
            _possibles_movements[spot[0]+1][spot[1] + 1] = 1;
        }
        if(spot[0] >0){
            _possibles_movements[spot[0] +1][spot[1] -1] = 1;
        }
    }
    if(this->get_color() == "White" && _first_time == false){
        _possibles_movements[spot[0]+1][spot[1]] = 1;
        if(spot[0] <7){
            _possibles_movements[spot[0]+1][spot[1] + 1] = 1;
        }
        if(spot[0] >0){
            _possibles_movements[spot[0] +1][spot[1] - 1] = 1;
        }
    }

    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][spot[1]]= 0; 




}

