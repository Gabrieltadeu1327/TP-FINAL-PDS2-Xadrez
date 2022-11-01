#include <iostream>
#include "piece.hpp"

using namespace std;

Piece::Piece(string color){
    _color = color;

//Rezar matriz de movimentos possiveis

    for(int i = 0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j] = 0;
        }
    }

}
void Piece::def_possible_movements(int* spot){}

string Piece::get_color(){
    return _color;
}

string Piece::get_name(){
    return _name;
}

string Piece::get_image(){
    return _image;
}

void Piece::not_my_first_time(){};
// int ** Piece::get_possibles(){
//     return _possibles_movements;
// }
