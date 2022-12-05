/**
 * @file piece.hpp
 * @author group
 * @brief Superclasse com a lógica de piece.
 * @version 0.1
 * @date 2022-11-28
 * @details Nessa superclasse ocorre a criação das váriaveis de 
 *  cada peça(imagem, nome, cor, primeiro turno).
 *  Criamos a matriz de possíveis movimentos, a ser utilizada por
 *  cada subclasse de peça. Além de criar as funções que geram a peça
 *  e captam sua imagem, nome, cor e turno. Cria também a função 
 *  virtual def_possible_movements que é reescrita pelas subclasses (polimorfismo).
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef PIECE_HPP
#define PIECE_HPP

#include <iostream>

using namespace std;

/**
 * @brief Cria as variáveis e funções a serem usadas em todas subclasses.
 * @details Cria a matriz de possíveis movimentos, cria as funções de 
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
         * @brief Função virtual que definirá os possíveis movimentos das peças do jogo.
         * @details Recebendo a posição atual da peça, atualizamos a matriz de possíveis movimentos _possibles_movements,
         *  note que ainda não fizemos a verificação de validez do movimento. Aqui a função é apenas virtual.
         * 
         * @param spot ponto atual da peça, necessário para determinar seus possíveis
         *  movimentos futuros.
         * 
         * @return void
         */
        virtual void def_possible_movements(int* spot)=0;


        /**
         * @brief Retorna a cor da peça selecionado pelo player.
         * @details Função que detecta cor da peça e retorna ela. 
         * 
         * @return string, podendo ser 'Black' ou 'White'.
         */
        string get_color();


        /**
         * @brief Retorna o nome da peça selecionada pelo player.
         * @details Função que detecta nome da peça e retorna ela.
         * 
         * @return string, podendo ser 'Bishop', 'Hook', 'King', 'Queen', 'Pawn', 'Knight'.
         */
        string get_name();


        /**
         * @brief Retorna um texto com o endereço da imagem de determinada peça.
         * @details Função que detecta endereço de imagem da peça na memória e retorna ela.
         * 
         * @return string do caminho da imagem na pasta do projeto. 
         */
        string get_image();
        

        /**
         * @brief Seta se o player já efetuou jogada.
         * @details Verifica se a peça foi usada, caso positivo, seta a variável _first_time como false.
         * 
         * @return void
         */
        void not_my_first_time();

        /**
         * @brief Retorna se o player já efetou alguma jogada (usada na implementação
         *  da movimentação do peão).
         * @details Detectando se a peça já foi usada, podemos descobrir se ela pode executar 
         *  movimentações especiais como roque e andar duas casas com peão. Ocorre o retorno da váriavel
         *  _first_time.
         * 
         * @return true se é primeira jogada
         * @return false se não é primeira jogada
         */
        bool get_first_time();

};

#endif