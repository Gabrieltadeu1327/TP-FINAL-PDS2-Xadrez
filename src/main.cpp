#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <stdio.h>
#include <iostream>


int* array_to_pixel(int* spot);
int* pixel_to_array(int* pixel);
const int SC_W = 960;
const int SC_H = 540;

int main(){

	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    
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

	//cria fila de eventos:
	event_queue = al_create_event_queue();

	//registra na fila eventos de tela:
	al_register_event_source(event_queue, al_get_display_event_source(display));
	
	int run = 1;
	while(run){
		std::cout<<"Rodando o jogo\n";
		//atualiza tela e a colore:
		al_clear_to_color(al_map_rgb(150, 210, 90));
		al_flip_display();

		ALLEGRO_EVENT ev;
		//espera por um evento e o armazena em ev
		al_wait_for_event(event_queue, &ev);

		//evento de fechamento de tela:
		if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
			run = 0;
			break;
		}

	}
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

    return pixel;
}

int* pixel_to_array(int* pixel){
    int *spot;
    //eixo x
    *pixel -= 26; //tira 26 pq as casas começam a partir do pixel 26
    *spot = (*pixel/68); //a cada 68 pixels, pula uma casa (pega só parte inteira da divisão)

    //eixo y
    *(pixel+1) -= 227; //tira 26 pq as casas começam a partir do pixel 26
    *(spot+1) = (*(pixel+1)/68); //a cada 68 pixels, pula uma casa (pega só parte inteira da divisão)

    return spot;
}

////CASCATA DE EXECUÇÕES

    //Abrir jogo

    // bool start=false, start=false;

    // //Jogo roda em looping infinito ate o o programa ser manualmente fechado
    // for(;;){
        
    //     //Construtor partida
        
    //     while(start== false){
    //         if(/*clicou no botao start*/){
    //             start== true;
    //         }
    //     }start ==false;
       
    //     //Partida.game()

    // //     //Funcao da partida que ouve se há vencendor
    // //     while(winner()==NULL){
    // //     }
    // //     if(winner()== "White"){
    // //         //Tela vitoria Branco
            
    // //     }else if(winner() == "Black"){
    // //         //Tela vitoria preto
    // //     }
        
    // //     while(reset== false){
    // //         if(/*clicou no botao reset*/){
    // //             reset== true;
    // //         }
    // //     }reset ==false;
    // //     //Apagar tela de vitoria 

    // //     //destrutor partida 
    // // };