/**
    * @file king.hpp
    * @authors group
    * @brief subclasse com a lógica do king
    * @version 1.0
    * @date 2022-11-24
    * @details responsável por construir a subclasse king
    e chamar a função def_possible_movements,
    além de retornar uma variável booleana que avisa se há cheque
    ou não.
*/

#ifndef KING_HPP
#define KING_HPP

#include "include/pieces/piece.hpp"

using namespace std;

class King: public Piece {
    private:
        bool xeque= false;

    public:
        King(string color);
        void def_possible_movements(int* spot) override;
        // bool is_xeque();
        // void set_xeque(bool cheque);

};

#endif