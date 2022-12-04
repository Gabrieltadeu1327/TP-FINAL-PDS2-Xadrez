/**
 * @file bishop.hpp
 * @author group
 * @brief Subclasse com a lógica do bishop.
 * @version 0.1
 * @date 2022-11-28
 * @details Responsável por construir a subclasse bishop
 * e chamar a função def_possible_movements.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

using namespace std;

/**
 * @brief Define os possíveis movimentos. 
 * @details Dentro da subclasse Bishop, que herda de Piece, construímos
 *  o bispo recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual.
 */ 
class Bishop: public Piece {

    public:

        Bishop(string color);
        ~Bishop(){};

        /**
         * @brief Função sobrescreve a função, da classe mãe, que define possíveis movimentos para o bispo (preto ou branco).
         * @details Recebendo a posição atual do bispo, a função altera a matriz de possíveis movimentos, 
         *  declarada na classe 'piece', colocando '1' para movimento possível e '0' para movimento impossível,
         *  note que ainda não existe a verificação de validez do movimento.
         *  Ocorre sobrescrição da função virtual declarada em piece. 
         * 
         *  @param spot ponto inteiro atual da peça, necessário para determinar seus possíveis
         *  movimentos futuros.
         * 
         * @return void.
         */
        void def_possible_movements(int* spot) override;

};

#endif