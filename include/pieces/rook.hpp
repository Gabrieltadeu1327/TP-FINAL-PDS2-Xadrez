#ifndef ROOK_HPP
#define ROOK_HPP

#include "piece.hpp"

using namespace std;

class Rook: public Piece {

    public:

        Rook(string color);
        void def_possible_movements(int* spot) override;
        

};

#endif