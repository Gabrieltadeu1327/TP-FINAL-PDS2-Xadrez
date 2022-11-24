/**
    * @file knight.hpp
    * @authors group
    * @brief subclasse com a lógica do knight
    * @version 1.0
    * @date 2022-11-24
    * @details Responsável por construir a subclasse knight
    e chamar a função def_possible_movements.
*/

#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class Knight: public Piece {

    public:

        Knight(string color);
        void def_possible_movements(int*spot) override;
        
};

#endif