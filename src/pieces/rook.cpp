#include "C:\Users\gabri\OneDrive\Área de Trabalho\UFMG\PDS\TP-FINAL-PDS2-Xadrez-main\TP-FINAL-PDS2-Xadrez-main\include\pieces\rook.hpp"

using namespace std;

rook::rook(string color, int *spot){
    Piece(color, spot);
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
void rook::def_possible_movements(){
    int *spot = this->get_spot();
    if (this->get_color() == "white"){
        int go_leftW=0, go_right=0, go_topW=0, go_downW=0;
        for(int i=0; i<8; i++){
                if([*(spot-i)][*spot]==[0][*spot]){
                    break;
                }
                else{
                    go_leftW++;
                }
        }
        for(int i=0; i<8; i++){
                if([*(spot+i)][*spot]==[8][*spot]){
                    break;
                }
                else{
                    go_rightW++;
                }
        }
        for(int i=0; i<8; i++){
                if([*spot][*(spot+i)==[*spot][8]){
                    break;
                }
                else{
                    go_topW++;
                }
        }
        for(int i=0; i<8; i++){
                if([*spot][*(spot-i)]==[*spot][0]){
                    break;
                }
                else{
                    go_downW++;
                }
        }
        for(int j=1; j<go_rightW; j++){
            _possibles_movements[*(spot + j)][*spot]=1;
        }
        for(int j=1; j<go_leftW; j++){
            _possibles_movements[*(spot - j)][*spot]=1;
        }
        for(int j=1; j<go_topW; j++){
            _possibles_movements[*spot][*(spot + j)]=1;
        }
        for(int j=1; j<go_downW; j++){
            _possibles_movements[*spot][*(spot - j)]=1;
        }
    }

// -------------------------------------------------------------------------------------------------------------------------------------------

    if (this->get_color() == "black"){
        int go_leftB=0, go_rightB=0, go_topB=0, go_downB=0;
        for(int i=0; i<8; i++){
                if([*(spot-i)][*spot]==[0][*spot]){
                    break;
                }
                else{
                    go_leftB++;
                }
        }
        for(int i=0; i<8; i++){
                if([*(spot+i)][*spot]==[8][*spot]){
                    break;
                }
                else{
                    go_rightB++;
                }
        }
        for(int i=0; i<8; i++){
                if([*spot][*(spot+i)==[*spot][8]){
                    break;
                }
                else{
                    go_topB++;
                }
        }
        for(int i=0; i<8; i++){
                if([*spot][*(spot-i)]==[*spot][0]){
                    break;
                }
                else{
                    go_downB++;
                }
        }
        for(int j=1; j<go_rightB; j++){
            _possibles_movements[*(spot + j)][*spot]=1;
        }
        for(int j=1; j<go_leftB; j++){
            _possibles_movements[*(spot - j)][*spot]=1;
        }
        for(int j=1; j<go_topB; j++){
            _possibles_movements[*spot][*(spot + j)]=1;
        }
        for(int j=1; j<go_downB; j++){
            _possibles_movements[*spot][*(spot - j)]=1;
        }
    }
}