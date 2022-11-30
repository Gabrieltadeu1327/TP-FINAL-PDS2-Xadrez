/**
 * @file queen.hpp
 * @author group
 * @brief Sublasse com a lógica da queen.
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
 * @brief Define os possíveis movimentos.
 * @details Dentro da subclasse Queen, que herda de Piece, construímos
 *  a rainha recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual.
 */ 
class Queen: public Piece {

    public:

        Queen(string color);
        ~Queen(){};

        /**
         * @brief Define matriz de possíveis movimentos para a rainha (preto ou branco).
         * @details Recebendo a posição atual da rainha, definimos a matriz de possíveis movimentos,
         * note que ainda não fizemos a verificação de validez do movimento.
         * 
         * @param spot ponto atual da peça, necessário para determinar seus possíveis
         * movimentos futuros
         * 
         * @return void 
         */
        void def_possible_movements(int*spot) override;

};

#endif