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

#include <iostream>
#include <string>
#include "include/pieces/piece.hpp"

using namespace std;

class Player{
    private:
        std::string collor;
        float init_time, max_time;

    public:
        
        Player();
        ~Player();
        
        void set_time(float t);
        float get_time();
        
        void setcollor(std::string c);
        std::string getcollor();
        
        
    
};

#endif