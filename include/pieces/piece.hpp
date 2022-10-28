#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

using namespace std;

class Piece {

    private:
        string _image;
        const string _name;
        string _color;
    
    public:

        int _possibles_movements[8][8];
        Piece(string color);
        Piece();
        virtual void def_possible_movements(int* spot);
        string get_color();
        string get_name();
        

};

#endif