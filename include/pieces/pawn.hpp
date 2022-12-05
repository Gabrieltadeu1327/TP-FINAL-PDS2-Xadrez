/**
 * @file pawn.hpp
 * @author group
 * @brief Subclasse com a lógica do pawn.
 * @version 0.1
 * @date 2022-11-28
 * @details Responsável por construir a subclasse pawn
 * e chamar a função def_possible_movements, além de chamar
 * a função de movimentação especial promotion.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PAWN_HPP
#define PAWN_HPP

#include "piece.hpp"
using namespace std;

/**
 * @brief Define os possíveis movimentos e promoção.
 * @details Dentro da subclasse Pawn, que herda de Piece, construímos
 *  o peão recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual, realizamos a função de promoção, que promove o peão
 *  a uma peça mais forte, a rainha.
 */ 
class Pawn: public Piece {
    private:

    public:
        Pawn(string color);
        ~Pawn(){};

        /**
         * @brief Função sobrescreve a função, da classe mãe, que define possíveis movimentos para o peão (preto ou branco).
         * @details Recebendo a posição atual do peão, a função altera a matriz de possíveis movimentos, 
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