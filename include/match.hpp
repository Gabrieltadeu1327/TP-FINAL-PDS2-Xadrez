#include <iostream>
#include <string>
#include "board.hpp"

class Match{

std::string turn = "White";
std::string winner = "";
std::string image_dots[8][8];
std::string image_pices[8][8];
bool selected = false;
int last_spot[2];

Board *bo = new Board();

public:
    
    Match();
    ~Match();
    //Recebe clicks NO TABULEIRO
    void game(int *spot);

    std::string** get_imagespices();
    std::string** get_imagesdots();
    std::string getwinner();
    void setwinner(std::string winner);
    void refreshwinner();
    void p_gaveup();

};



