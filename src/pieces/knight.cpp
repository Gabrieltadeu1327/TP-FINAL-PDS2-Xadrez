#include "include\pieces\knight.hpp"

using namespace std;

Knight::Knight(string color){
    Piece(color);
    _name= "Knight";
     //  _image = "./" 
}

void Knight::def_possible_movements(int* spot){
    
    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            _possibles_movements[i][j]=0;
        }
    };
    
   // if(this->get_color() == "white"){
        for(int ed = *spot, cb = *(spot), count = 0; ed > -1 && count < 2; ed--, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count  = 0; ed < 8 && count < 2; ed--, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed-=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed-=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; ed > -1 && count < 2; ed++, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count  = 0; ed < 8 && count < 2; ed++, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed+=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed+=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
 //   }

   /* if(this->get_color() == "black"){
        for(int ed = *spot, cb = *(spot), count = 0; ed > -1 && count < 2; ed--, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count  = 0; ed < 8 && count < 2; ed--, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed-=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed-=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; ed > -1 && count < 2; ed++, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count  = 0; ed < 8 && count < 2; ed++, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed+=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = *spot, cb = *(spot), count = 0; cb < 8 && count < 2;ed+=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
    }
*/
    //Zera a casa da posição atual das peças:
    _possibles_movements[*spot][*(spot+1)]= 0; 
}
