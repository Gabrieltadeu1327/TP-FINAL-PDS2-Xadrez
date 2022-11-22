#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/*@file queen.hpp
*@brief sublasse com a lógica da queen
*@details Responsável por construir a subclasse queen
e chamar a função def_possible_movements.
*/

class Queen: public Piece {

    public:

        Queen(string color);
        void def_possible_movements(int*spot) override;

};

#endif