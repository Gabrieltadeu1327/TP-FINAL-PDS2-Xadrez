#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "piece.hpp"

using namespace std;

class Knight: public Piece {

    public:

        Knight(string color, int*spot);
        void def_possible_movements() override;
        
        

};

#endif