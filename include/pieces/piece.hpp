#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

using namespace std;

class Piece {

    private:
        string _image;
        string _color;
        int _spot[2];

    protected:
        int _possibles_movements[8][8];
    
    public:

        Piece(string color, int*spot);
        Piece();
        virtual void def_possible_movements();
        string get_color();
        int* get_spot(); 
        void set_spot(int x, int y);
        int* get_possibles();
        

};

#endif