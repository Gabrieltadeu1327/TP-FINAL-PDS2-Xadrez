#ifndef PAWN_HPP
#define PAWN_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/*@file pawn.hpp
*@brief subclasse com a lógica do pawn
*@details Responsável por construir a subclasse pawn
e chamar a função def_possible_movements, além de chamar
a função de movimentação especial promotion.
*/

class Pawn: public Piece {
    private:

    public:
        Pawn(string color);
        void def_possible_movements(int*spot) override;
        void promotion();

};


#endif