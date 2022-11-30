/**
 * @file knight.hpp
 * @author group
 * @brief Subclasse com a lógica do knight.
 * @version 0.1
 * @date 2022-11-28
 * @details Responsável por construir a subclasse knight
 * e chamar a função def_possible_movements.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "piece.hpp"
using namespace std;

/**
 * @brief Define os possíveis movimentos. 
 * @details Dentro da subclasse Knight, que herda de Piece, construímos
 *  o cavalo recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual.
 */
class Knight: public Piece {

    public:

        Knight(string color);
        ~Knight(){};

        /**
         * @brief Define matriz de possíveis movimentos para o cavalo (preto ou branco)
         * @details Recebendo a posição atual do cavalo, definimos a matriz de possíveis movimentos,
         *  note que ainda não fizemos a verificação de validez do movimento.
         * 
         * @param spot ponto atual da peça, necessário para determinar seus possíveis
         * movimentos futuros
         * 
         * @return void 
         */
        void def_possible_movements(int*spot) override;
        
};

#endif