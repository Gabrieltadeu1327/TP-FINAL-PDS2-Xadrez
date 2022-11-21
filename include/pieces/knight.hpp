#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class Knight: public Piece {

    public:

        Knight(string color);
        void def_possible_movements(int*spot, Piece* board) override;
        
        

};

#endif