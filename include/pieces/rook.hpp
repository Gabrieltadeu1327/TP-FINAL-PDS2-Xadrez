/**
    * @file rook.hpp
    * @authors group
    * @brief subclasse com a lógica do rook
    * @version 1.0
    * @date 2022-11-24
    * @details Responsável por construir a subclasse rook
    e chamar a função def_possible_movements.
*/

#ifndef ROOK_HPP
#define ROOK_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class Rook: public Piece {

    public:

        Rook(string color);
        void def_possible_movements(int* spot) override;

};

#endif