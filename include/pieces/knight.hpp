/**
 * @file knight.hpp
 * @authors group
 * @brief subclasse com a lógica do knight
 * @version 1.0
 * @date 2022-11-24
 * @details Responsável por construir a subclasse knight
 *  e chamar a função def_possible_movements.
 */ 

#ifndef KNIGHT_HPP
#define KNIGHT_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/**
 * @brief define os possíveis movimentos 
 * @details dentro da subclasse Knight, que herda de Piece, construímos
 *  o cavalo recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual.
 */

class Knight: public Piece {

    public:

        Knight(string color);
        void def_possible_movements(int*spot) override;
        
};

#endif