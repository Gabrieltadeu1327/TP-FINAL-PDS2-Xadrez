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