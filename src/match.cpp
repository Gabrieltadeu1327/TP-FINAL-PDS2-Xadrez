#include "../include/match.hpp"
#include <iostream>

Match::Match(){
    // int v[2] = {0, 3};
    // std::cout<<bo->get_image(v);
    std::cout<<"criou match";
};

Match::~Match(){
    delete bo;
}
//retorna a matriz de imgs do tabuleiro
void Match::refresh_imagespices(){
    
    int v[2];
    for(int i=0 ; i<8; i++){
       for(int j=0 ; j<8; j++){
        v[0]=i; 
        v[1]=j;
        image_pices[i][j] = bo->get_image(v);
        } 
    }

}

void Match::refresh_imagesdots(){
    
};

std::string Match::getwinner(){
    return winner;
}
void Match::game(int spot[0]){

    int** mat;

    if(selected){
      
        if(image_dots[spot[0]][(spot[0]+1)] != ""){
            bo->set_piece(last_spot,spot);
                if(bo->get_piece(spot)->get_name() == "King"){
                    winner= turn;
                }

            if(turn =="white"){
                turn = "Black";
            }else{
                turn = "White";
            }
        }
        
        for(int i=0 ; i<8; i++){
            for(int j=0 ; j<8; j++){
            image_dots[i][j]= "";
            } 
        }
        selected = false; 

    } else{
        if(bo->get_piece(spot) != nullptr){
            if(bo->get_collor(spot) == turn){
                mat = bo->def_valid_moviments(spot);
                for(int i=0; i<8; i++){
                   for(int j=0; j<8; j++){
                        if(mat[i][j]== 0){
                            image_dots[i][j] = "";
                        }else if(mat[i][j]== 1){
                            image_dots[i][j] = "images/Possible_Mov";//BOTAR ENDEREÇO QUADRADO VERDE
                        }else if(mat[i][j]== -1){
                            image_dots[i][j] = "images/Impossible_Mov";//BOTAR ENDEREÇO QUADRADO VERMELHO
                        }
                    } 
                }
                selected = true;
                last_spot[0] = spot[0];
                last_spot[1] = spot[1];
            }
        }
    }

}



