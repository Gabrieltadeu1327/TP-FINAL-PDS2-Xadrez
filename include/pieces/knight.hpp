#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/**
    * @file knight.hpp
    * @brief subclasse com a lógica do knight
    * @details Responsável por construir a subclasse knight
    e chamar a função def_possible_movements.
*/

class Knight: public Piece {

    public:

        Knight(string color);
        void def_possible_movements(int*spot) override;
        
};

#endif