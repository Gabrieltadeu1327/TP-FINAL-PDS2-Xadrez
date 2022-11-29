/**
 * @file piece.hpp
 * @author group
 * @brief superclasse com a lógica de piece
 * @version 0.1
 * @date 2022-11-28
 * @details nessa superclasse ocorre a criação das váriaveis de 
 * cada peça(imagem, nome, cor, primeiro turno).
 * Criamos a matriz de possíveis movimentos, a ser utilizada por
 * cada subclasse de peça. Além de criar as funções que geram a peça
 * e captam sua imagem, nome, cor e turno. Cria também a função 
 * virtual def_possible_movements que é reescrita pelas subclasses (polimorfismo).
 * 
 * @copyright Copyright (c) 2022
 * 
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
        const char *_image;
        string _name;
        string _color;
        bool _first_time = true;
    
    public:

        int _possibles_movements[8][8];
        Piece(string color);
        Piece();
        ~Piece(){};

        /**
         * @brief protótipo de uma função virtual que definirá os possíveis movimentos
         * das peças do jogo.
         * 
         * @param spot ponto atual da peça, necessário para determinar seus possíveis
         * movimentos futuros.
         * 
         * @return void
         */
        virtual void def_possible_movements(int* spot);


        /**
         * @brief Retorna a cor da peça selecionado pelo player
         * 
         * @return string 
         */
        string get_color();


        /**
         * @brief Retorna o nome da peça selecionada pelo player
         * 
         * @return string 
         */
        string get_name();


        /**
         * @brief Retorna um texto com o enderço da imagem de determinada peça
         * 
         * @return string 
         */
        string get_image();
        

        /**
         * @brief Retorna se o player ja efetuou alguma jogada (usada na implementação
         * da movimentação do peão)
         * 
         * @return void
         */
        void not_my_first_time();

        /**
         * @brief Retorna se o player já efetou alguma jogada (usada na implementação
         * da movimentação do peão)
         * 
         * @return true se é primeira jogada
         * @return false se não é primeira jogada
         */
        bool get_first_time();

};

#endif