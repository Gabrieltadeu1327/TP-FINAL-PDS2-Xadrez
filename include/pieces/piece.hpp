/**
 * @file piece.hpp
 * @authors group
 * @brief superclasse com a lógica de piece
 * @version 1.0
 * @date 2022-11-24
 * @details nessa superclasse ocorre a criação das váriaveis de 
 *  cada peça(imagem, nome, cor, primeiro turno).
 *  Criamos a matriz de possíveis movimentos, a ser utilizada por
 *  cada subclasse de peça. Além de criar as funções que geram a peça
 *  e captam sua imagem, nome, cor e turno. Cria também a função 
 *  virtual def_possible_movements que é reescrita pelas subclasses (polimorfismo).
 */ 

#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

using namespace std;

/**
 * @brief cria as variáveis e funções a serem usadas em todas subclasses
 * @details cria a matriz de possíveis movimentos, cria as funções de 
 *  definição dos possíveis movimentos, detecção de cor, nome da peça, imagem e turno da peça.
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
        ~Piece(){};
        virtual void def_possible_movements(int* spot);
        string get_color();
        string get_name();
        string get_image();
        void not_my_first_time();
        bool get_first_time();
        virtual void promotion(int *spot){};

};

#endif