#include "include\pieces\knight.hpp"

using namespace std;

Knight::Knight(string color, int*spot){
    Piece(color, spot);
}

void Knight::def_possible_movements(){
    int *spot = this->get_spot();
    if(this->get_color() == "white"){
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

    if(this->get_color() == "black"){
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
}
