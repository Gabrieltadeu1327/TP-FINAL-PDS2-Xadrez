#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "piece.hpp"

using namespace std;

class Queen: public Piece {

    public:

        Queen(string color);
        void def_possible_movements(int*spot) override;

};

#endif