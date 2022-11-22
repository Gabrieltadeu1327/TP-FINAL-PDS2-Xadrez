#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>
#include "piece.hpp"
#include "bishop.hpp"
#include "pawn.hpp"
#include "knight.hpp"
#include "king.hpp"
#include "queen.hpp"
#include "rook.hpp"
#include "player.hpp"

/**
    * @file board.hpp
    * @brief superclasse com a lógica de board
    * @details aqui tratamos as relações que ocorrem entre as peças.
    Cada função aqui descrita retrona para main valores que serão
    utilizados durante o processamento de cada jogada feita.
*/

class Board{

    private:
        Piece* board[8][8];

//Matrizes de ataque
        int white_atc_mat[8][8];
        int black_atc_mat[8][8];

    public:
        std::string images[8][8];
        
        Board();

        Piece* get_piece(int* spot);

        int** def_valid_moviments(int* spot); 

        void set_piece(int* atual_spot, int* spot);

        void refresh_images();
        
        void refresh_atc_matriz(string cor);

        bool isnullprt(int* spot);

        int ischeque();

};

#endif