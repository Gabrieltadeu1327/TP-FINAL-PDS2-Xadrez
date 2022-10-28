#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "piece.hpp"


using namespace std;

class Player{
    private:
        bool turn;
        float time;

    public:
        void move_piece(Piece p, int* spot);
        
        void give_up();
        
        void set_time();
        float get_time();
        
        void set_turn();
        bool is_turn();
    

};

#endif