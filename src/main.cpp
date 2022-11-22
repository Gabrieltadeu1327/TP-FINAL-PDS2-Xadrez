#include <allegro5/allegro.h>
#include <stdio.h>
#include <iostream>


int* array_to_pixel(int* spot);
int* pixel_to_array(int* pixel);
const int SC_W = 960;
const int SC_H = 540;

int main(){
	std::cout<<"main";
	ALLEGRO_DISPLAY *display = NULL;


////CASCATA DE EXECUÇÕES

    //Abrir jogo

    bool start=false, start=false;

    //Jogo roda em looping infinito ate o o programa ser manualmente fechado
    for(;;){
        
        //Construtor partida
        
        while(start== false){
            if(/*clicou no botao start*/){
                start== true;
            }
        }start ==false;
       
        //Partida.game()

        //Funcao da partida que ouve se há vencendor
        while(winner()==NULL){
        }
        if(winner()== "White"){
            //Tela vitoria Branco
            
        }else if(winner() == "Black"){
            //Tela vitoria preto
        }
        
        while(reset== false){
            if(/*clicou no botao reset*/){
                reset== true;
            }
        }reset ==false;
        //Apagar tela de vitoria 

        //destrutor partida 
    };
    


	//inicia o allegro:
	if(!al_init()){
		fprintf(stderr, "failed");
		return -1;
	}
	
	//cria uma tela:
	display = al_create_display(SC_W, SC_H);
	if(!display){
		fprintf(stderr, "failed");
		return -1;
	}

	//atualiza tela:
	al_clear_to_color(al_map_rgb(150, 210, 90));
	al_flip_display();

	return 0;
}

//Funções:


int* array_to_pixel(int* spot){
    int *pixel;
    //para passar pra próxima casa (+68/69px)
    //eixo x
        if(*(spot) % 2 == 0) 
            *pixel = 26 + (*(spot) * 68);
        else
            *pixel = 27 + (*(spot) * 68);
    //eixo y
        if(*(spot+1) % 2 == 0)
            *(pixel+1) = 227 + (*(spot+1) * 68);
        else
            *(pixel+1) = 228 + (*(spot+1) * 68);

    return *pixel;
}

int* pixel_to_array(int* pixel){
    int *spot;
    //eixo x
    *pixel -= 26; //tira 26 pq as casas começam a partir do pixel 26
    spot = (*pixel/68); //a cada 68 pixels, pula uma casa (pega só parte inteira da divisão)

    //eixo y
    *(pixel+1) -= 227; //tira 26 pq as casas começam a partir do pixel 26
    *(spot+1) = (*(pixel+1)/68); //a cada 68 pixels, pula uma casa (pega só parte inteira da divisão)

    return *spot;
}