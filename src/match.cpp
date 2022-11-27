#include "include/match.hpp"


Match::Match(){};

Match::~Match(){

    delete bo;
}
//retorna a matriz de imgs do tabuleiro
std::string** Match::images_pices(){
    
    int v[2];
    for(int i=0 ; i<8; i++){
       for(int j=0 ; j<8; j++){
        v[0]=i; 
        v[1]=j;
        image_pices[i][j]= bo->get_image(v);
        } 
    }
    return (std::string**)image_pices;
}

std::string** Match::images_dots(){
    return (std::string**)image_dots;
};

std::string Match::getwinner(){
    return winner;
}
void Match::game(int *spot){

    if(selected){
      
        if(image_dots[*spot][(*spot+1)] != ""){
            bo->set_piece(last_spot,spot);
        }
        selected = false; 
        for(int i=0 ; i<8; i++){
            for(int j=0 ; j<8; j++){
            image_dots[i][j]= "";
            } 
        }
    } else{
        if(bo->get_piece(spot) != nullptr){
            if(bo->get_collor(spot) == turn){
                bo->def_valid_moviments(spot);


            }
        }
    }

}



