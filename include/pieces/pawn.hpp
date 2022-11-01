#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"

using namespace std;

class Pawn: public Piece {
    private:
    bool _first_time = true;

    public:
        Pawn(string color);
        void def_possible_movements(int*spot) override;
        void promotion();
        void not_my_first_time() override;

};


#endif