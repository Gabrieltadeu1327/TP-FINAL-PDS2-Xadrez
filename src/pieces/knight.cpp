//#define NDEBUG
#include "../../include/pieces/knight.hpp"

//#include <c//assert>

using namespace std;

Knight::Knight(string color):Piece(color){
    _name= "Knight";
    
    if(color == "White"){
        _image = "src/images/W_Knight.png";
    }else if(color == "Black"){
        _image = "src/images/B_Knight.png";
    };
}

void Knight::def_possible_movements(int* spot){
    
    // Rezeta a Matriz de movimentos possiveis
    for (int i=0; i<9; i++){
        //assert(0 <= i && i >= 9);
        for(int j=0; j<9; j++){
            //assert(0 <= j && j >= 9);
            _possibles_movements[i][j]=0;
        }
    };
    
        for(int ci= -2; ci<3; ci++){
            for(int cj=-2; cj<3; cj++){
            
                if(std::abs(ci)== std::abs(cj) || ci==0 || cj == 0){
                    continue;
                }
                
                if(spot[0] +ci>= 0 && spot[0] +ci <8 &&
                   spot[1] +cj>= 0 && spot[1] +cj<8){
                    _possibles_movements[spot[0]+ci][spot[1]+cj] =1;
                }


            }
    }
    
    /*
   // if(this->get_color() == "white"){
        for(int ed = spot[0], cb = spot[1], count = 0; ed > -1 && count < 2; ed--, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count  = 0; ed < 8 && count < 2; ed--, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed-=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed-=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; ed > -1 && count < 2; ed++, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count  = 0; ed < 8 && count < 2; ed++, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed+=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed+=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
 //   }
*/
    //Zera a casa da posição atual das peças:
    _possibles_movements[spot[0]][*(spot+1)]= 0; 
}


   /* if(this->get_color() == "black"){
        for(int ed = spot[0], cb = spot[1], count = 0; ed > -1 && count < 2; ed--, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count  = 0; ed < 8 && count < 2; ed--, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed-=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed-=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; ed > -1 && count < 2; ed++, cb+=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count  = 0; ed < 8 && count < 2; ed++, cb-=2, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed+=2, cb++, count++){
        _possibles_movements[ed][cb] = 1;
        }

        for(int ed = spot[0], cb = spot[1], count = 0; cb < 8 && count < 2;ed+=2, cb--, count++){
        _possibles_movements[ed][cb] = 1;
        }
    }
*/

