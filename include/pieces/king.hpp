/**
 * @file king.hpp
 * @authors group
 * @brief subclasse com a lógica do king
 * @version 1.0
 * @date 2022-11-24
 * @details responsável por construir a subclasse king
 *  e chamar a função def_possible_movements,
 *  além de retornar uma variável booleana que avisa se há cheque
 *  ou não.
 */ 

#ifndef KING_HPP
#define KING_HPP

#include "piece.hpp"

using namespace std;

/**
 * @brief define os possíveis movimentos e se está em cheque ou não
 * @details dentro da subclasse King, que herda de Piece, criamos uma variável,
 *  para uso no determínio de cheque, construímos o rei recebendo sua cor, determinamos
 *  uma matriz de possíveis movimentos recebendo seu ponto atual, retornamos a função de 
 *  cheque e  determinamos os movimentos caso o rei esteja em cheque.
 */ 

class King: public Piece {
    private:
        bool xeque= false;

    public:
        King(string color);
        ~King(){};
        void def_possible_movements(int* spot) override;
        // bool is_xeque();
        // void set_xeque(bool cheque);

};

#endif