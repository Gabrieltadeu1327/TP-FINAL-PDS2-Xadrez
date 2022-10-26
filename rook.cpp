#include "include\pieces\rook.hpp"

using namespace std;

rook::rook(string color, int *spot){
    Piece(color, spot);
}

// No caso da torre ela pode fazer movimentos apenas na horizontal e vertical, quantas casas quiser, sem pular nenhuma peça
//lembre-se acessar a coordenada coluna: [x] --> [*spot], acessar a coordenada linha: [y] --> [*(spot+1)]
void rook::def_possible_movements(){
    //Pega a posição da peça
    int *spot = this->get_spot();

    //caso a peça seja branca
    if (this->get_color() == "white"){

        //contabilizadores de quantidade de movimentos possíveis para uma direção
        int go_leftW=0, go_rightW=0, go_topW=0, go_downW=0;

        //contabilização de movimentos possíveis para a esquerda
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

        //contabilização de movimentos possíveis para a direita
        x=*spot;
        for(int i=0; i<7; i++){
                if(x == 7){
                    break;
                }
                else{
                    go_rightW++;
                    x++;
                }
        }

        //contabilização de movimentos possíveis para cima
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

        //contabilização de movimentos possíveis para baixo
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

        //possíveis movimentos para direita
        x=*spot;
        for(int j=0; j<=go_rightW; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x++;
        }

        //possíveis movimentos para esquerda
        x=*spot;
        for(int j=0; j<=go_leftW; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x--;
        }

        //possíveis movimentos para cima
        y=*(spot+1);
        for(int j=0; j<=go_topW; j++){
            _possibles_movements[*spot][y]=1;
            j--;
        }

        //possíveis movimentos para baixo
        y=*(spot+1);
        for(int j=0; j<=go_downW; j++){
            _possibles_movements[*spot][y]=1;
            j++;
        }
    }

// -------------------------------------------------------------------------------------------------------------------------------------------

    //caso a peça seja preta
    if (this->get_color() == "black"){

        //contabilizadores de quantidade de movimentos possíveis para uma direção
        int go_leftB=0, go_rightB=0, go_topB=0, go_downB=0;

        //contabilização de movimentos possíveis para a esquerda
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

        //contabilização de movimentos possíveis para a direita
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

        //contabilização de movimentos possíveis para cima
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

        //contabilização de movimentos possíveis para baixo
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

        //possíveis movimentos para direita
        x=*spot;
        for(int j=0; j<=go_rightB; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x++;
        }

        //possíveis movimentos para esquerda
        x=*spot;
        for(int j=0; j<=go_leftB; j++){
            _possibles_movements[x][*(spot+1)]=1;
            x--;
        }

        //possíveis movimentos para cima
        y=*(spot+1);
        for(int j=0; j<=go_topB; j++){
            _possibles_movements[*spot][y]=1;
            j--;
        }

        //possíveis movimentos para baixo
        y=*(spot+1);
        for(int j=0; j<=go_downB; j++){
            _possibles_movements[*spot][y]=1;
            j++;
        }
    }
}