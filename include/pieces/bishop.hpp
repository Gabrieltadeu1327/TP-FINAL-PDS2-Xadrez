#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

using namespace std;

class Bishop: public Piece {

    public:

        Bishop(string color, int*spot);
        void def_possible_movements() override;
        
        

};

#endif