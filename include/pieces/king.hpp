#ifndef KING_HPP
#define KING_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class King: public Piece {
    private:
        bool xeque= false;

    public:
        King(string color);
        void def_possible_movements(int* spot, Piece* board) override;
        bool is_xeque();
        void set_xeque(bool cheque);

        
};

#endif