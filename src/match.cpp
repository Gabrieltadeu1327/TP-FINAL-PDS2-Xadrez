#include "include/match.hpp"


Match::Match(){};

Match::~Match(){

    delete bo;
}

std::string** Match::images_pices(){
   return bo->getimages();
}

std::string** Match::images_dots(){};

std::string Match::getwinner(){
    return winner;
}
void Match::game(int *spot){

    if(selected){
        if((images_dots())[*spot][(*spot+1)] != ""){

        }
    }else{
        bo->def_valid_moviments(spot)
    }

}



