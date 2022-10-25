#include <iostream>
#include "piece.hpp"

using namespace std;

Piece::Piece(string color, int*spot){
    _color = color;
    _spot[2] = *spot;
    
    for(int i = 0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j] = 0;
        }
    }

}
void Piece::def_possible_movements(){}

string Piece::get_color(){
    return _color;
}

int * Piece::get_spot(){
    return _spot;
}

void Piece::set_spot(int x, int y){
    _spot[0] = x;
    _spot[1] = y;
}

int * Piece::get_possibles(){
    return *_possibles_movements;
}
