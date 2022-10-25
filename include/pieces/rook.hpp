#ifndef ROOK_HPP
#define ROOK_HPP

#include "piece.hpp"

using namespace std;

class Rook: public Piece {

    public:

        Rook(string color, int*spot);
        void def_possible_movements() override;
        

};

#endif