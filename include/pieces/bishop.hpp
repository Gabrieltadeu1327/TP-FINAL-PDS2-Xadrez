/**
    * @file bishop.hpp
    * @authors group
    * @brief subclasse com a lógica do bishop
    * @version 1.0
    * @date 2022-11-24
    * @details responsável por construir a subclasse bishop
    e chamar a função def_possible_movements.
*/ 

#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

using namespace std;

class Bishop: public Piece {

    public:

        Bishop(string color);
        void def_possible_movements(int* spot) override;

};

#endif