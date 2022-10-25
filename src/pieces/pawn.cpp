#include "C:\Users\emagn_ga9soas\OneDrive\Área de Trabalho\TP PDS2\include\pieces\pawn.hpp"

using namespace std;

Pawn::Pawn(string color, int*spot){
    Piece(color, spot);
    _first_time = true;
}

//No caso do peão define os movimentos possiveis como duas casas a frente caso seja seu primeiro movimento ou uma casa a frente caso não seja
void Pawn::def_possible_movements(){
    int *spot = this->get_spot();
    if(this->get_color() == "white" && _first_time == true){
        _possibles_movements[*spot][*(spot+1) - 1] = 1;
        _possibles_movements[*spot][*(spot+1) - 2] = 1;
        _first_time = false;
    }
    if(this->get_color() == "white" && _first_time == false){
        _possibles_movements[*spot][*(spot+1) - 1] = 1;
    }
    if(this->get_color() == "black" && _first_time == true){
        _possibles_movements[*spot][*(spot+1) + 1] = 1;
        _possibles_movements[*spot][*(spot+1) + 2] = 1;
        _first_time = false;
    }
    if(this->get_color() == "black" && _first_time == false){
        _possibles_movements[*spot][*(spot+1) + 1] = 1;
    }

}
