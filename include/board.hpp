#ifndef BOARD_HPP
#define BOARD_HPP

#include "piece.hpp"
#include "bishop.hpp"
#include "pawn.hpp"
#include "horse.hpp"
#include "king.hpp"
#include "queen.hpp"
#include "tower.hpp"
#include "player.hpp"

using namespace std;

class Board{

    private:
        Piece* board[8][8];

//Matrizes de ataque
        int white_atc_mat[8][8];
        int black_atc_mat[8][8];

    public:
        Board();

        Piece* get_piece(int* spot);

        int** def_valid_moviments(Piece* p); 

        void set_piece(Piece* p, int* n_spot);

        string** board_figures();
        
        // void roque();
        // void promotion(Piece* p);
        // void el_passant();

};

#endif