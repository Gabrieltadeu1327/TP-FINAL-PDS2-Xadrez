
#include "include/board.hpp"
#include <stdexcept>

Board::Board(){
   
   //Rezeta o board
   for (int i= 0; i<8; i++){
        for (int j= 0; j<8; j++)
        {
            board[i][j]= nullptr;
        }
   }
   
   //Declara as peças
    board[0][0] = new Rook("Black");
    board[0][1] = new Knight("Black");
    board[0][2] = new Bishop("Black");
    board[0][3] = new Queen("Black");
    board[0][4] = new King("Black");
    board[0][5] = new Bishop("Black");
    board[0][6] = new Knight("Black");
    board[0][7] = new Rook("Black");

    for(int i=0; i< 8; i++){
         board[1][i] = new Pawn("Black");
    }

    board[7][0] = new Rook("White");
    board[7][1] = new Knight("White");
    board[7][2] = new Bishop("White");
    board[7][3] = new Queen("White");
    board[7][4] = new King("White");
    board[7][5] = new Bishop("White");
    board[7][6] = new Knight("White");
    board[7][7] = new Rook("White");
    
    for(int i=0; i< 8; i++){
         board[6][i] = new Pawn("White");
    }


}

//retorna a peça de um endereço
Piece* Board::get_piece(int* spot){

    return board[*spot][*(spot +1)];

}
// Muda a posição de uma peça e declara 
void Board::set_piece(int* atual_spot, int* f_spot){
        

    //Mudança Torre Roque
    int* rook_spot = atual_spot;
    int* rook_nspot = f_spot;
    
    if(get_piece(atual_spot)->get_name() == "King" &&
       *(f_spot+1) - *(atual_spot+1) > 1 ){

        *(rook_spot +1) = 7;
        *(rook_nspot+1) = 5;
        set_piece(rook_spot,rook_nspot);

    }else
    if(get_piece(atual_spot)->get_name() == "King" &&
       *(f_spot+1) - *(atual_spot+1) < -1 ){

        *(rook_spot +1) = 0;
        *(rook_nspot+1) = 3;
        set_piece(rook_spot,rook_nspot);
    }

    //Altera a posição da peça
    (get_piece(atual_spot))->not_my_first_time();

    if(get_piece(f_spot) !=nullptr){
        free(get_piece(f_spot));
    }
    board[*f_spot][*(f_spot +1)] = get_piece(atual_spot);
    board[*atual_spot][*(atual_spot+1)] = nullptr;


    //Promoção
    if(get_piece(atual_spot)->get_name() == "Pawn" && 
       get_piece(atual_spot)->get_color() == "White" && 
       *f_spot == 0 ){
        
        get_piece(atual_spot)->promotion(f_spot);

        if(get_piece(f_spot) !=nullptr){
            free(get_piece(f_spot));
        }
        board[*f_spot][*(f_spot+1)] = new Queen("white");
     
    }else 
    if(get_piece(atual_spot)->get_name() == "Pawn" && 
       get_piece(atual_spot)->get_color() == "Black" && 
       *f_spot == 7 ){
     
        if(get_piece(f_spot) !=nullptr){
            free(get_piece(f_spot));
        }
        board[*f_spot][*(f_spot+1)] = new Queen("Black");
        
    }
    


}

//envia a matriz de imagems 
std::string** Board::getimages(){
   //Atualiza a matriz
    for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if(board[i][j] != nullptr){
                images[i][j]= (board[i][j])->get_image();  
            }else{
                images[i][j]= nullptr;
            }    
        }  
    }
    return (std::string**)images;
}

//Restrinje os movimentos validos
int** Board::def_valid_moviments( int* spot){

    Piece* p = get_piece(spot);
    if(p == nullptr){
 
        throw std::invalid_argument("ponteiro nulo");
        return nullptr; 
    }

    int** mat;
    mat= (int**)(p->_possibles_movements);
 

    //eliminando casos de mesma cor   
    for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if(mat[i][j]==1 && board[i][j] != nullptr){
               if(board[i][j]->get_color() == p->get_color()){
                mat[i][j] =0; 
               }  
            }    
        }  
    }

    // Como cavalo n move para os lados, ele está ok 
    if(p->get_name()== "Knight"){
    
    }else 

    // Rei não possui caminhos com falhas mas n pode se colocar em xeque  
    if(p->get_name()== "King"){ 

        // Implementação roque
        if(p->get_first_time()== true){
        
            if(p->get_color() == "White" ){
                
                if(board[7][7] !=nullptr){
                    if(board[7][7]->get_name()=="Rook" &&
                    board[7][7]->get_first_time()==true &&
                    board[7][6]==nullptr &&
                    board[7][5]==nullptr ){

                        mat[7][6]==1;
                    }
                }

                if(board[7][0] !=nullptr){
                    if(board[7][0]->get_name()=="Rook" &&
                    board[7][0]->get_first_time()==true &&
                    board[7][1]==nullptr &&
                    board[7][2]==nullptr &&
                    board[7][3]==nullptr ){

                        mat[7][2]==1;
                    }
                }

            }else if(p->get_color() == "Black"){

                if(board[0][0] !=nullptr){
                    if(board[0][0]->get_name()=="Rook" &&
                    board[0][0]->get_first_time()==true &&
                    board[0][1]==nullptr &&
                    board[0][2]==nullptr &&
                    board[0][3]==nullptr ){

                        mat[0][2]==1;
                    }
                }

                if(board[0][7] !=nullptr){
                    if(board[0][7]->get_name()=="Rook" &&
                    board[0][7]->get_first_time()==true &&
                    board[0][6]==nullptr &&
                    board[0][5]==nullptr ){

                        mat[0][6]==1;
                    }
                }
            }
        }
        //Garante que o rei nao vai ficar em cheque ao se movimentar        
        for(int i= 0; i< 8; i++){
            for(int j= 0; j< 8; j++){
                
                if(p->get_color() == "Black"){
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

    }else 
    //Pião possui padrao de movimento dependente e movimentos especiais
    if(p->get_name() == "Pawn"){
        if(p->get_color()== "Black"){
            //movimento frontal
            if(board[*spot+1][*(spot+1)] != nullptr){
                mat[*spot+1][*(spot+1)] == 0;
                //Remoção de corte no caminho
                mat[*spot+2][*(spot+1)] == 0;
            }
            //Veririfacção movimento diagonal
            if(*spot !=7){
                if(board[*spot+1][*(spot+1)+1] != nullptr){
                mat[*spot+1][*(spot+1)] == 1;
                }
            }if(*spot !=0){
                if(board[*spot+1][*(spot+1)-1] != nullptr){
                mat[*spot+1][*(spot-1)] == 1;
                }
            }
        }else{
            //movimento frontal
            if(board[*spot-1][*(spot+1)] != nullptr){
                mat[*spot-1][*(spot+1)] == 0;
                //Remoção de corte no caminho
                mat[*spot+2][*(spot+1)] == 0;
            }
            //Veririfacção movimento diagonal
            if(*spot !=7){
                if(board[*spot-1][*(spot+1)+1] != nullptr){
                mat[*spot-1][*(spot+1)] == 1;
                }
            }if(*spot !=0){
                if(board[*spot-1][*(spot+1)-1] != nullptr){
                mat[*spot-1][*(spot-1)] == 1;
                }
            }
        }

    // Remoção das falhas nos caminhos ( rainha, Bispo, torre) 
    }else{
 
        int sum;

        for(int ci= -1; ci<2; ci++){
            for(int cj=-1; cj<2; cj++){
            
            sum=1;

                if(ci ==0 && cj ==0){
                    continue;
                }

                for( int i=*spot; i>0 && i<8; i+= ci){
                    for( int j= *(spot +1); j>0 && j<8; j+= cj){
                    
                       mat[i][j] *=sum;
                        if(board[i][j] != nullptr){
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
   // atribuicao -1 para casas que podem ser comidas
    for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            if(mat[i][j]==1 && board[i][j] != nullptr){
               if(board[i][j]->get_color() != p->get_color()){
                mat[i][j] = -1; 
               }  
            }    
        }  
    }

    return mat;
}

void Board::refresh_atc_matriz(string cor){

int** piece_mov; 
int spot[2];

    if(cor == "White"){
        //Zerando a matriz
        for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
         
         white_atc_mat[i][j]=0;
        }  
        }
        
        for(int i= 0; i< 8; i++){
          for(int j= 0; j< 8; j++){
            spot[0]= i;
            spot[1]= j; 
            
            if(board[i][j] != nullptr){
                if((board[i][j])->get_color()== "White"){
                    
                        piece_mov = def_valid_moviments(spot);

                        for(int z= 0; z< 8; z++){
                        for(int y= 0; y< 8; y++){
                            white_atc_mat[z][y] += std::abs( piece_mov[z][y]);
                        } 
                        }
                }    

            }
                
          }  
        }
    
    }else{
        //zerando a matriz
        for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
         
         black_atc_mat[i][j]=0;
        }  
        };
        
        for(int i= 0; i< 8; i++){
        for(int j= 0; j< 8; j++){
            spot[0]= i;
            spot[1]= j; 
            
            if(board[i][j] != nullptr){
                if((board[i][j])->get_color()== "Black" ){
                   
                    piece_mov = def_valid_moviments(spot);

                    for(int z= 0; z< 8; z++){
                    for(int y= 0; y< 8; y++){
                         black_atc_mat[z][y] += std::abs(piece_mov[z][y]);
                    }  
                    }
                }

            }    
        }  
        }    


    }
   
};

int Board::ischequemate(){

    refresh_atc_matriz("White");
    refresh_atc_matriz("Black");




}

Board::~Board(){

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                if(board[i][j] != nullptr){
                    delete board[i][j];
                }
            }
        }
    delete board;
    delete white_atc_mat;
    delete black_atc_mat;
    delete images;
}