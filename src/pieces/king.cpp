#include "include\pieces\king.hpp"

using namespace std;

King::King(string color){
    Piece(color);
    _name= "King";
     //  _image = "./"
}

void King::def_possible_movements(int* spot){

    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            _possibles_movements[i][j]=0;
        }
    };


    for (int i=(*spot)-1; i< (*spot)+1; i++){
        for(int j= *(spot+1)-1 ; j< *(spot+1)+1; j++){
            
            if(i>=0 && i<8 &&
               j>= 0 && j<8){
                    _possibles_movements[i][j]=0;
               }        
        }
    };
    
    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][*(spot+1)]= 0; 

    if(_first_time){
        _possibles_movements[*spot][3]=1;
        _possibles_movements[*spot][6]=1;
    }


/*
    if(this->get_color() == "white"){
        //Possibilidades Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && count < 2; ed--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Baixo;
        for(int ed = *spot, cb = *(spot+1), count  = 0; ed < 8 && count < 2; ed++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Direita;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb < 8 && count < 2;cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Esquerda;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb > -1 && count < 2; cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

         //Possibilidades Diagonal pra Direita e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb < 8 && count < 2; ed++, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra Direita e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb < 8 && count < 2; ed--, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb > -1 && count < 2; ed++, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb > -1 && count < 2; ed--, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
    }

    if(this->get_color() == "black"){
        //Possibilidades Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && count < 2; ed--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Baixo;
        for(int ed = *spot, cb = *(spot+1), count  = 0; ed < 8 && count < 2; ed++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Direita;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb < 8 && count < 2;cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Esquerda;
        for(int ed = *spot, cb = *(spot+1), count = 0; cb > -1 && count < 2; cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

         //Possibilidades Diagonal pra Direita e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb < 8 && count < 2; ed++, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra Direita e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb < 8 && count < 2; ed--, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Baixo;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed < 8 && cb > -1 && count < 2; ed++, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
        //Possibilidades Diagonal pra Esquerda e pra Cima;
        for(int ed = *spot, cb = *(spot+1), count = 0; ed > -1 && cb > -1 && count < 2; ed--, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        } 
    }
 */   
   


}
