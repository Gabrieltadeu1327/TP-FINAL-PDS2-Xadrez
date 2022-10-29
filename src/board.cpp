#include "include/board.hpp"

//retorna a peça de um endereço
Piece* Board::get_piece(int *spot){

    return board[spot*][(spot +1)*];

}
// Muda a posição de uma peça
void Board::set_piece(int* atual_spot, int* f_spot){
    
    board[f_spot*][(f_spot +1)] = get_piece(atual_spot);
    board[atual_spot*][(atual_spot)*] = nullptr;

}

//envia a matriz de imagems 
string** Board::board_figures(){

    string s_matriz[8][8];

    for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if(board[i][j] != nullptr){
                s_matriz[i][j]= (board[i][j])->get_image();  
            }    
        }  
    }
    return s_matriz;
}

//Restrinje os movimentos validos
int** Board::def_valid_moviments( Piece* p){

int mat[8][8];
mat= p->_possibles_movements;

//eliminando casos de mesma cor   
    for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if(mat[i][j]==1){
               if(board[i][j]->get_color == p->get_color()){
                mat[i][j] =0;
               }  
            }    
        }  
    }

// Como cavalo n move para os lados, ele está ok
    if(p->get_name()== "Knight"){
        
        return mat;
    }

    if(p->get_name()== "King"){

        refresh_atc_matriz();
        
        for(int i= 0; i< 8; i++){
            for(int j= 0; j< 8; j++){
                if(p->get_color == "White"){
                        if(mat[i][j]== 1 && 
                        mat[i][j]==white_atc_mat[i][j]){
                        
                        mat[i][j]=0;
                        }
                }else{
                        if(mat[i][j]== 1 && 
                        mat[i][j]==black_atc_mat[i][j]){
                   
                        mat[i][j]=0;
                        } 
                }           
            }  
        }


    }else{







    }

}





