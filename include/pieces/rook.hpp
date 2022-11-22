#ifndef ROOK_HPP
#define ROOK_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/**
    * @file rook.hpp
    * @brief subclasse com a lógica do rook
    * @details Responsável por construir a subclasse rook
    e chamar a função def_possible_movements.
*/

class Rook: public Piece {

    public:

        Rook(string color);
        void def_possible_movements(int* spot) override;
        

};

#endif