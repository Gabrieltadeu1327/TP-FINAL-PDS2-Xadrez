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
        Piece board[8][8];
        Player pb;
        Player pp;
    public:
        Board();

};

#endif