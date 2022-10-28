#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

using namespace std;

class King: public Piece {
    private:
        bool xeque;

    public:
        King(string color);
        void def_possible_movements(int* spot) override;
        bool is_xeque();
        void set_xeque(bool cheque);

        
};

#endif