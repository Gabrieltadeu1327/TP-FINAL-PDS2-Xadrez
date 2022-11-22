#ifndef BISHOP_HPP
#define BISHOP_HPP

#include "piece.hpp"

using namespace std;

/**
* @file bishop.hpp
* @brief subclasse com a lógica do bishop
* @details responsável por construir a subclasse bishop
e chamar a função def_possible_movements.
*/ 

class Bishop: public Piece {

    public:

        Bishop(string color);
        void def_possible_movements(int* spot) override;
        
        

};

#endif