#include "include\pieces\queen.hpp"

using namespace std;

Queen::Queen(string color, int*spot){
    Piece(color, spot);
}

void Queen::def_possible_movements(){
    int *spot = this->get_spot();