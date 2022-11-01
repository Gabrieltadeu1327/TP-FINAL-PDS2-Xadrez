#include "include/board.hpp"
#include "include/pieces/king.hpp"

Board::Board(){
    board[0][1] = new King("white");

}


//retorna a peça de um endereço
Piece* Board::get_piece(int *spot){

    return board[spot*][(spot +1)*];

}
// Muda a posição de uma peça
void Board::set_piece(int* atual_spot, int* f_spot){
    
    if((get_piece(atual_spot))->get_name() == "Pawn"){
        (get_piece(atual_spot))->not_my_first_time();

    }

    board[f_spot*][(f_spot +1)] = get_piece(atual_spot);
    board[atual_spot*][(atual_spot+1)*] = nullptr;
    
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
int** Board::def_valid_moviments( int* spot){

    Piece* p = get_piece(spot);


    int mat[8][8];

    mat= p->_possibles_movements;

//eliminando casos de mesma cor   
    for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if(mat[i][j]==1){
               if(board[i][j]->get_color() == p->get_color()){
                mat[i][j] =0;
               }  
            }    
        }  
    }

// Como cavalo n move para os lados, ele está ok
    if(p->get_name()== "Knight"){
        
        return mat;
    }
// Rei não possui caminhos com falhas mas n pode se colocar em xeque
    
    if(p->get_name()== "King"){

        refresh_atc_matriz();
        
        for(int i= 0; i< 8; i++){
            for(int j= 0; j< 8; j++){
                
                if(p->get_color == "Black"){
                        if(mat[i][j]== 1 && 
                        white_atc_mat[i][j] != 0){
                        
                        mat[i][j]=0;
                        }
                }else{
                        if(mat[i][j]== 1 && 
                        black_atc_mat[i][j] != 0){
                   
                        mat[i][j]=0;
                        } 
                }           
            }  
        }

// Remoção das falhas nos caminhos 
    }else{
 
        int sum;

        for(int ci= -1; ci<2; ci++){
            for(int cj=-1; cj<2; cj++){
            
            sum=1;

                if(ci ==0 && cj ==0){
                    continue;
                }

                for( int i=spot*; i>0 && i<8; i+= ci){
                    for( int j= (spot +1)*; j>0 && j<8; j+= cj){
                       
                       mat[i][j] *=sum;
                            if((board[i][j])->get_color() != p->get_color() || 
                                mat[i][j]==0){
                                sum=0;
                            }
                    }
                }

            }
       }

   
    }

}

void Board::refresh_atc_matriz(string cor){

int new_mat[8][8];

    if(cor == "White"){
        for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
         
         white_atc_mat[i][j]=0;
        }  
        }
        
        for(int i= 0; i< 8; i++){
          for(int j= 0; j< 8; j++){
            if((board[i][j])->get_color()== "White"){
                    
                    new_mat = def_valid_moviments(board[i][j]);

                    for(int z= 0; z< 8; z++){
                    for(int y= 0; y< 8; y++){
                         white_atc_mat[z][y] += new_mat[z][y];
                    }  
                    }
            }    
          }  
        }
    
    }else{
        
        for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
         
         black_atc_mat[i][j]=0;
        }  
    };
        for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if((board[i][j])->get_color()== "Black"){
                    for(int z= 0; z< 8; z++){
                    for(int y= 0; y< 8; y++){
                         black_atc_mat[z][y] += (def_valid_moviments(board[i][j]))[z][y];
                    }  
                    }
            }    
        }  
        }    


    }
   
};





