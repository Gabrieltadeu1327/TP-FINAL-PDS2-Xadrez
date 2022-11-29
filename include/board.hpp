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
#include "pieces/piece.hpp"
#include "pieces/bishop.hpp"
#include "pieces/pawn.hpp"
#include "pieces/knight.hpp"
#include "pieces/king.hpp"
#include "pieces/queen.hpp"
#include "pieces/rook.hpp"

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

    public:
       
        Board();
        ~Board();

        Piece* get_piece(int* spot);

        void def_valid_moviments(int* spot, int mat[8][8]); 

        void set_piece(int* atual_spot, int* spot);

        std::string get_image(int* spot);
        std::string get_collor(int* spot);
        
        void refresh_atc_matriz(string cor);

        bool ischeque(std::string color);


};

#endif