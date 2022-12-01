/**
 * @file king.hpp
 * @author group
 * @brief Subclasse com a lógica do king.
 * @version 0.1
 * @date 2022-11-28
 * @details Responsável por construir a subclasse king
 * e chamar a função def_possible_movements,
 * além de retornar uma variável booleana que avisa se há cheque
 * ou não.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

using namespace std;

/**
 * @brief Define os possíveis movimentos e se está em cheque ou não.
 * @details Dentro da subclasse King, que herda de Piece, criamos uma variável,
 *  para uso no determínio de cheque, construímos o rei recebendo sua cor, determinamos
 *  uma matriz de possíveis movimentos recebendo seu ponto atual, retornamos a função de 
 *  cheque e  determinamos os movimentos caso o rei esteja em cheque.
 */ 
class King: public Piece {

    public:
        King(string color);
        ~King(){};

        /**
         * @brief Define matriz de possíveis movimentos para o rei (preto ou branco).
         * @details Recebendo a posição atual do rei, definimos a matriz de possíveis movimentos,
         * note que ainda não fizemos a verificação de validez do movimento.
         * 
         * @param spot ponto atual da peça, necessário para determinar seus possíveis
         * movimentos futuros
         * 
         * @return void 
         */
        void def_possible_movements(int* spot) override;
};

#endif