//#define NDEBUG
#include "include\pieces\bishop.hpp"
#include <cassert>

using namespace std;

Bishop::Bishop(string color){
    Piece(color);
    _name = "Bishop";
  //  _image = "./"   
}

void Bishop::def_possible_movements(int* spot){

  // Rezeta a Matriz de movifffffmentos possiveis
    for (int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            assert( i < 0 || i >= 8 || j < 0 || j >= 8 );
            _possibles_movements[i][j]=0;
        }
    };

    for(int ci= -1; ci<2; ci++){
            for(int cj=-1; cj<2; cj++){
            
                if(ci ==0 || cj ==0){
                    continue;
                }
                
                for( int i=*spot; i>0 && i<8; i+= ci){
                    for( int j= *(spot +1); j>0 && j<8; j+= cj){
                        
                        _possibles_movements[i][j]=1;
                    }
                }


            }
    }




/*
    if(this->get_color() == "white"){
        //Possibilidades Diagonal pra DIREITA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed < 8 && cb < 8; ed++, cb++){
            assert(ed >= 8 && cd >= 8);
        _possibles_movements[ed][cb] = 1;

            assert(ed >= 8 && cb >= 8);
            _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb < 8; ed--, cb++){
            assert(ed <= -1 && cb >= 8);
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed < 8 && cb > -1; ed++, cb--){
            assert(ed >= 8 && cb <= -1);
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb > -1; ed--, cb--){
            assert(ed <= -1 && cb <= -1);
        _possibles_movements[ed][cb] = 1;
        }
    }

    if(this->get_color() == "black"){
        //Possibilidades Diagonal pra DIREITA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed < 8 && cb < 8; ed++, cb++){
            assert(ed >= 8 && cb >= 8);
        _possibles_movements[ed][cb] = 1;
        }

        //Possibilidades Diagonal pra ESQUERDA e pra CIMA;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb < 8; ed--, cb++)
            asseet(ed <= -1 && cb >= 8);
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra DIREITA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed < 8 && cb > -1; ed++, cb--)
            assert(ed >= 8 && cb <= -1);
        _possibles_movements[ed][cb] = 1;

        //Possibilidades Diagonal pra ESQUERDA e pra BAIXO;
        for(int ed = *spot, cb = *(spot+1); ed > -1 && cb > -1; ed--, cb--)
            assert(ed <= -1 && cb <= -1);
        _possibles_movements[ed][cb] = 1;
    }
    */




    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][*(spot+1)]= 0; 

}
