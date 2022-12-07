#include "../include/match.hpp"

#include <iostream>
#include <cassert>

Match::Match(){};

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

std::string Match::getwinner(){
    return winner;
}
//da continuiade ao jogo
void Match::game(int spot[2]){

    if(spot[0]<0 || spot[0]>=8 ||
       spot[1]<0 || spot[1]>=8){
        throw invalid_argument("Parametro fora de alcance");
    }
       
    
    int mat[8][8];
    bool isnull=true;
    //um click pode ser para selecionar um peça ou para mover a peça para algum lugar
    if(selected){
        if(image_dots[spot[0]][spot[1]] != ""){
            
            if(bo->get_piece(spot) != nullptr){
                if(bo->get_piece(spot)->get_name() == "King"){
                     winner= turn;
                }
            }    

            bo->set_piece(last_spot,spot);    
            //muda a vez
            if(turn =="White"){
                turn = "Black";
            }else{
                turn = "White";
            }
        }else{
            for(int i=0 ; i<8; i++){
                for(int j=0 ; j<8; j++){
                    image_dots[i][j]= "";
                } 
            }
            
            selected = false;  
            throw MovNotValidExeption();
        }
        //rezeta image dots
        for(int i=0 ; i<8; i++){
            for(int j=0 ; j<8; j++){
            image_dots[i][j]= "";
            } 
        }
        selected = false; 

    } else{
        if(bo->get_piece(spot) != nullptr){
            if(bo->get_collor(spot) == turn){
                bo->def_valid_moviments(spot, mat);
                // determiana se um movimento é valido ou nao
                
                for(int i=0; i<8; i++){
                   for(int j=0; j<8; j++){
                        if(mat[i][j]== 0){
                            image_dots[i][j] = "";
                        }else if(mat[i][j]== 1){
                            image_dots[i][j] = "images/Possible_Mov.png";//BOTAR ENDEREÇO QUADRADO VERDE
                            isnull=false;

                        }else if(mat[i][j]== -1){
                            image_dots[i][j] = "images/Impossible_Mov.png";//BOTAR ENDEREÇO QUADRADO VERMELHO

                            isnull=false;                        
                        }
                    } 
                }
                
                last_spot[0] = spot[0];
                last_spot[1] = spot[1];
                
                if(!isnull){
                   selected = true;   
                }else{
                    
                   throw VoidMovimentExeption();
                }                             

            }else{
                throw NotTurnExeption();
            }
        }else{
            throw VoidSpotExeption();
        }
    }

}

std::string Match::get_turn(){
    return turn;
}
//muda o winner contarrio ao give up
void Match::p_gaveup(){
    if(turn == "White") winner = "Black";
    if(turn == "Black") winner = "White";
}

//execessoes de todos os tipos
ButtonSpotExeption::ButtonSpotExeption(){
    _message = "Spot passado é inválido";
}

const char* ButtonSpotExeption::what() const noexcept{
    return _message;
}

VoidMovimentExeption::VoidMovimentExeption(){
    _message= "Matriz de movimentos validos é vazia";
}
const char* VoidMovimentExeption::what() const noexcept{
    return _message;
}
NotTurnExeption::NotTurnExeption(){
    _message = "Não é a vez da peça clicada";
}
const char* NotTurnExeption::what() const noexcept{
    return _message;
}
VoidSpotExeption::VoidSpotExeption(){
    _message = "O local clicado não possui peças";
}
const char* VoidSpotExeption::what() const noexcept{
    return _message;
}
MovNotValidExeption::MovNotValidExeption(){
    _message = "A peça não pode se movimentar para o local clicado";
}
const char* MovNotValidExeption::what() const noexcept{
    return _message;
}
OutOfTableExeption::OutOfTableExeption(){
    _message = "Posição está fora do tabuleiro";
}
const char* OutOfTableExeption::what() const noexcept{
    return _message;
}
