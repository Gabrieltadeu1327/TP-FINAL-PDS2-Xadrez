#ifndef ROOK_HPP
#define ROOK_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class Rook: public Piece {

    public:

        Rook(string color);
        void def_possible_movements(int* spot, Piece* board) override;
        

};

#endif