#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

using namespace std;

class King: public Piece {
    private:
        bool xeque;

    public:
        King(string color, int*spot);
        void def_possible_movements() override;
        bool is_xeque() const;

        
};

#endif