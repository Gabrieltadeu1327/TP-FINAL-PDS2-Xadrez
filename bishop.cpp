#include "C:\Users\artur\Desktop\Chess Game in C++\Código\TP-FINAL-PDS2-Xadrez-main\TP-FINAL-PDS2-Xadrez-main\include\pieces\bishop.hpp"

using namespace std;

Bishop::Bishop(string color, int*spot){
    Piece(color, spot);
}

void Bishop::def_possible_movements(){
    int *spot = this->get_spot();
    int *spotcount = this->get_spot();
    if(this->get_color() == "white"){
        //Possibilidades Diagonal pra DIREITA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed > -1 || ed < 9 && cb > -1 || cb < 9; ed++, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed > -1 || ed < 9 && cb > -1 || cb < 9; ed--, cb++)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed > -1 || ed < 9 && cb > -1 || cb < 9; ed++, cb--)
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed > -1 || ed < 9 && cb > -1 || cb < 9; ed--, cb--)
        _possibles_movements[ed][cb] = 1;
    }
}
