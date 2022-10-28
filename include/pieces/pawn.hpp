#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

using namespace std;

class Pawn: public Piece {
    private:
    bool _first_time;

    public:
        Pawn(string color);
        void def_possible_movements(int*spot) override;
        void promotion();
};

#endif