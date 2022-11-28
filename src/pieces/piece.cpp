#include <iostream>

#include "../../include/pieces/piece.hpp"

using namespace std;

Piece::Piece(string color){
    _color = color;
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

void Piece::not_my_first_time(){;
  _first_time=false;
}
bool Piece::get_first_time(){
    return _first_time;
}
