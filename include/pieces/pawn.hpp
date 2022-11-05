#ifndef PAWN_HPP
#define PAWN_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class Pawn: public Piece {
    private:

    public:
        Pawn(string color);
        void def_possible_movements(int*spot) override;
        void promotion();

};


#endif