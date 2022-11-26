/**
 * @file bishop.hpp
 * @authors group
 * @brief subclasse com a lógica do bishop
 * @version 1.0
 * @date 2022-11-24
 * @details responsável por construir a subclasse bishop
 *  e chamar a função def_possible_movements.
 */ 

#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/**
 * @brief define os possíveis movimentos 
 * @details dentro da subclasse Bishop, que herda de Piece, construímos
 *  o bispo recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual.
 */ 

class Bishop: public Piece {

    public:

        Bishop(string color);
        ~Bishop(){};
        void def_possible_movements(int* spot) override;

};

#endif