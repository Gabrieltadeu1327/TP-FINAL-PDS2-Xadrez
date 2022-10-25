#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

using namespace std;

class Pawn: public Piece {
    private:
    bool _first_time;

    public:
        Pawn(string color, int*spot);
        void def_possible_movements() override;
        void promotion();
};

#endif