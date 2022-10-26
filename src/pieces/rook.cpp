#include "C:\Users\gabri\OneDrive\Área de Trabalho\UFMG\PDS\TP-FINAL-PDS2-Xadrez-main\TP-FINAL-PDS2-Xadrez-main\include\pieces\rook.hpp"

using namespace std;

rook::rook(string color, int *spot){
    Piece(color, spot);
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
//lembre-se acessar a coordenada coluna: [x] --> [*spot], acessar a coordenada linha: [y] --> [*(spot+1)]
void rook::def_possible_movements(){
    int *spot = this->get_spot();
    if (this->get_color() == "white"){
        int go_leftW=0, go_rightW=0, go_topW=0, go_downW=0;
        int x=*spot;
        for(int i=0; i<7; i++){
                if(x == 0){
                    break;
                }
                else{
                    go_leftW++;
                    x--;
                }
        }
        x=*spot;
        for(int i=0; i<7; i++){
                if(x == 7){
                    break;
                }
                else{
                    go_rightW++
                    x++;
                }
        }
        int y=*(spot+1);
        for(int i=0; i<7; i++){
                if(y==0){
                    break;
                }
                else{
                    go_topW++;
                    y--;
                }
        }
        int y=*(spot+1);
        for(int i=0; i<7; i++){
                if(y==7){
                    break;
                }
                else{
                    go_downW++;
                    y++;
                }
        }
        x=*spot;
        for(int j=0; j<=go_rightW; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x++;
        }
        x=*spot;
        for(int j=0; j<=go_leftW; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x--;
        }
        y=*(spot+1);
        for(int j=0; j<=go_topW; j++){
            _possibles_movements[*spot][y]=1;
            j--;
        }
        y=*(spot+1);
        for(int j=0; j<=go_downW; j++){
            _possibles_movements[*spot][y]=1;
            j++;
        }
    }

// -------------------------------------------------------------------------------------------------------------------------------------------

    if (this->get_color() == "black"){
        int go_leftB=0, go_rightB=0, go_topB=0, go_downB=0;
        int x=*spot;
        for(int i=0; i<7; i++){
                if(x==0){
                    break;
                }
                else{
                    go_leftB++;
                    x--;
                }
        }
        x=*spot;
        for(int i=0; i<7; i++){
                if(x==7){
                    break;
                }
                else{
                    go_rightB++;
                    x++;
                }
        }
        int y=*(spot+1);
        for(int i=0; i<7; i++){
                if(y==0){
                    break;
                }
                else{
                    go_topB++;
                    y--;
                }
        }
        y=*(spot+1);
        for(int i=0; i<7; i++){
                if(y==7){
                    break;
                }
                else{
                    go_downB++;
                    y++;
                }
        }
        x=*spot;
        for(int j=0; j<=go_rightB; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x++;
        }
        x=*spot;
        for(int j=0; j<=go_leftB; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x--;
        }
        y=*(spot+1);
        for(int j=0; j<=go_topB; j++){
            _possibles_movements[*spot][y]=1;
            j--;
        }
        y=*(spot+1);
        for(int j=0; j<=go_downB; j++){
            _possibles_movements[*spot][y]=1;
            j++;
        }
    }
}