/**
 * @file board.hpp
 * @authors group
 * @brief superclasse com a lógica de board
 * @version 1.0
 * @date 2022-11-24
 * @details aqui tratamos as relações que ocorrem entre as peças.
 *  Cada função aqui descrita retorna para main valores que serão
 *  utilizados durante o processamento de cada jogada feita.
 */ 

#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>
#include "include/pieces/piece.hpp"
#include "include/pieces/bishop.hpp"
#include "include/pieces/pawn.hpp"
#include "include/pieces/knight.hpp"
#include "include/pieces/king.hpp"
#include "include/pieces/queen.hpp"
#include "include/pieces/rook.hpp"
#include "include/player.hpp"

/**
 * @brief cria a matriz do tabuleiro, as matrizes de ataque, as funções a serem chamadas na main
 * @details criação do tabuleiro 8x8, da matriz de ataque de peças brancas 8x8 e pretas 8x8, 
 *  criação da função que recebe a posição da peça, da função que apresenta no tabuleiro os movimentos possíveis,
 *  a função que move a peça de um ponto inicial para um final, as funções de atualização e verificação de nulidade de 
 *  um ponteiro.
 */ 

class Board{

    private:
        Piece* board[8][8];

//Matrizes de ataque
        int white_atc_mat[8][8];
        int black_atc_mat[8][8];
        std::string images[8][8];

    public:
       
        Board();
        ~Board();

        Piece* get_piece(int* spot);

        int** def_valid_moviments(int* spot); 

        void set_piece(int* atual_spot, int* spot);

        std::string** getimages();
        
        void refresh_atc_matriz(string cor);

        int ischeque();

};

#endif