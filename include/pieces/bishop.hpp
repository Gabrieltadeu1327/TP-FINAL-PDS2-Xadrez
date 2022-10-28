#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

using namespace std;

class Bishop: public Piece {

    public:

        Bishop(string color);
        void def_possible_movements(int* spot) override;
        
        

};

#endif