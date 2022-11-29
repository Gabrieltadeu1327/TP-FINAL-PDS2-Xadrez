/**
 * @file queen.hpp
 * @author group
 * @brief sublasse com a lógica da queen
 * @version 0.1
 * @date 2022-11-28
 * @details Responsável por construir a subclasse queen
 * e chamar a função def_possible_movements.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef QUEEN_HPP
#define QUEEN_HPP

#include "piece.hpp"
using namespace std;

/**
 * @brief define os possíveis movimentos
 * @details dentro da subclasse Queen, que herda de Piece, construímos
 *  a rainha recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual.
 */ 
class Queen: public Piece {

    public:

        Queen(string color);
        ~Queen(){};
        void def_possible_movements(int*spot) override;

};

#endif