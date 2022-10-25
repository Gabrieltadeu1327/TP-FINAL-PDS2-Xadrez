#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "piece.hpp"

using namespace std;

class Queen: public Piece {

    public:

        Queen(string color, int*spot);
        void def_possible_movements() override;

};

#endif