#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

using namespace std;

/*@file piece.hpp
*@brief superclasse com a lógica de piece
*@details nessa superclasse ocorre a criação das váriaveis de 
cada peça(imagem, nome, cor, primeiro turno).
Criamos a matriz de possíveis movimentos, a ser utilizada por
cada subclasse de peça. Além de criar as funções que geram a peça
e captam sua imagem, nome, cor e turno. Cria também a função 
virtual def_possible_movements que é reescrita pelas subclasses (polimorfismo).
*/

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
        virtual void def_possible_movements(int* spot);
        string get_color();
        string get_name();
        string get_image();
        void not_my_first_time();
        bool get_first_time();
        

};

#endif