#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>
#include <cmath>

using namespace std;

class Piece {

    protected:
        string _image;
        string _name;
        string _color;
        bool _first_time = true;
    
    public:

        int _possibles_movements[8][8];
        Piece(string color);
        Piece();
        virtual void def_possible_movements(int* spot, Piece* board);
        string get_color();
        string get_name();
        string get_image();
        void not_my_first_time();
        bool get_first_time();
        

};

#endif