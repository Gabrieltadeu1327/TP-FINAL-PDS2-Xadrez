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
         * @brief Função sobrescreve a função, da classe mãe, que define possíveis movimentos para a rainha (preto ou branco).
         * @details Recebendo a posição atual da rainha, a função altera a matriz de possíveis movimentos, 
         *  declarada na classe 'piece', colocando '1' para movimento possível e '0' para movimento impossível,
         *  note que ainda não existe a verificação de validez do movimento.
         *  Ocorre sobrescrição da função virtual declarada em piece. 
         * 
         *  @param spot ponto inteiro atual da peça, necessário para determinar seus possíveis
         *  movimentos futuros.
         * 
         * @return void.
         */
        void def_possible_movements(int*spot) override;

};

#endif