/**
 * @file pawn.hpp
 * @authors group
 * @brief subclasse com a lógica do pawn
 * @version 1.0
 * @date 2022-11-24
 * @details Responsável por construir a subclasse pawn
 *  e chamar a função def_possible_movements, além de chamar
 *  a função de movimentação especial promotion.
 */ 

#ifndef PAWN_HPP
#define PAWN_HPP

#include "include/pieces/piece.hpp"

using namespace std;

/**
 * @brief define os possíveis movimentos e promoção
 * @details dentro da subclasse Pawn, que herda de Piece, construímos
 *  o peão recebendo sua cor, determinamos uma matriz de possíveis movimentos
 *  recebendo seu ponto atual, realizamos a função de promoção, que promove o peão
 *  a uma peça mais forte, a rainha.
 */ 

class Pawn: public Piece {
    private:

    public:
        Pawn(string color);
        void def_possible_movements(int*spot) override;
        void promotion();

};

#endif