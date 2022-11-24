/**
    * @file player.hpp
    * @authors group
    * @brief superclasse com a lógica do player
    * @version 1.0
    * @date 2022-11-24
    * @details ?
*/

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