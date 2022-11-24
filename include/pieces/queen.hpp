/**
    * @file queen.hpp
    * @authors group
    * @brief sublasse com a lógica da queen
    * @version 1.0
    * @date 2022-11-24
    * @details Responsável por construir a subclasse queen
    e chamar a função def_possible_movements.
*/

#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class Queen: public Piece {

    public:

        Queen(string color);
        void def_possible_movements(int*spot) override;

};

#endif