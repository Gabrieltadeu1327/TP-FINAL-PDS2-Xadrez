#include <iostream>
#include <string>
#include "piece.hpp"
#include "board.hpp"
#include "player.hpp"

class Match{

std::string turn = "White";
std::string winner = nullptr;
// time white = 500s
// time black = 500s
Board bo = new Board();

public:
    
    Match();
    ~Match();
    //Recebe clicks NO TABULEIRO
    void game(int *click);
    std::string** images();
    std::string getwinner();
    void setwinner(std::string winner);

};



