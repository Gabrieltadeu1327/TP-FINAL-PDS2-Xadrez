#include <iostream>
#include <string>
#include "include/pieces/piece.hpp"
#include "include/board.hpp"
#include "player.hpp"

class Match{

std::string turn = "White";
std::string winner = "";
Board *bo = new Board();

public:
    
    Match();
    ~Match();
    //Recebe clicks NO TABULEIRO
    void game(int *spot);
    std::string** images_pices();
    std::string** images_dots();
    std::string getwinner();
    void setwinner(std::string winner);

};



