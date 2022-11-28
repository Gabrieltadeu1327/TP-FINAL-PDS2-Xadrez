#include <allegro5/allegro.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_image.h>
#include <stdio.h>
#include <iostream>
#include <thread>    
#include <chrono>

#include "../include/match.hpp"
#include "../include/pieces/rook.hpp"
#include "../include/pieces/piece.hpp"
#include "../include/board.hpp"


int* array_to_pixel(int* spot);
int* pixel_to_array(int* pixel);
void drawn_pieces(Match &mat);

const int SC_W = 600;
const int SC_H = 700;
const float FPS = 10;

Rook *r = new Rook("Black");


using namespace std;
int main(){
    std::cout<<"run";
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
    ALLEGRO_TIMER *timer = NULL;
    
	//inicia o allegro:
	if(!al_init()){
		fprintf(stderr, "failed");
		return -1;
	}
	
	//cria uma tela:
	display = al_create_display(SC_W, SC_H);

	
    //cria um temporizador que incrementa uma unidade a cada 1.0/FPS segundos:
    timer = al_create_timer(1.0/FPS);
    
    //instala teclado e mouse:
    al_install_mouse();
    al_install_keyboard();

    //inicializa imagens:
    al_init_image_addon();
    ALLEGRO_BITMAP *fundo = al_load_bitmap("src/images/Chess_Menu.png");

	//cria fila de eventos:
	event_queue = al_create_event_queue();

	//registra na fila eventos de tela:
	al_register_event_source(event_queue, al_get_display_event_source(display));
    al_register_event_source(event_queue, al_get_mouse_event_source());
    al_register_event_source(event_queue, al_get_keyboard_event_source());
    al_register_event_source(event_queue, al_get_timer_event_source(timer));
	
	int run = 1;
    int click[2];
    //inicia o temporizador
    
    al_start_timer(timer);
    int x = 10;
    int y = 10;

    while(run){
        
        Match *match = new Match();

        while(match->getwinner() == ""){
            // const char *c = match->image_pices[0][5].c_str();
            // ALLEGRO_BITMAP *image = al_load_bitmap(c);

            al_draw_bitmap(fundo, 0, 0, 0);
            drawn_pieces(*match);
            // al_draw_bitmap(image, 0, 0, 0);
            ALLEGRO_EVENT ev;

            //espera por um evento e o armazena em ev
            al_wait_for_event(event_queue, &ev);

            //evento de fechamento de tela:
            if(ev.type == ALLEGRO_EVENT_TIMER){  
                
            }
            else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
                run = 0;
                break;
            }
            //detecta a posição do mouse:::::IMPORTANTISSIMO:::::::
            else if(ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN){
                
                click[0]= ev.mouse.y;
                click[1]= ev.mouse.x;
                match->game(click);

                printf("\n mouse clicando em: %d, %d", ev.mouse.x, ev.mouse.y); 
            }
            //detecta codigo da tecla pressionada
            else if(ev.type == ALLEGRO_EVENT_KEY_DOWN){
                switch (ev.keyboard.keycode){
                    case ALLEGRO_KEY_ESCAPE:
                        run = 0;
                        break;
                    case ALLEGRO_KEY_UP:
                        y -= 30;
                        break;
                    case ALLEGRO_KEY_DOWN:
                        y += 30;
                        break;
                    case ALLEGRO_KEY_LEFT:
                        x -= 30;
                        break;
                    case ALLEGRO_KEY_RIGHT:
                        x += 30;
                        break;
                }
                
            }

            // drawn_pieces(*match);
            al_flip_display();

        }
        
        if(match->getwinner() == "White"){
            //img vitoria Branco
        }else if(match->getwinner() == "Black"){
            //img vitoria Preto
        };
        
        while(1){
            ALLEGRO_EVENT ev;
            //espera por um evento e o armazena em ev
            al_wait_for_event(event_queue, &ev);
           
            //detecta a posição do mouse
            if(ev.type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN){
                if(/*click foi no botao*/1){
                    printf("\n mouse clicando em: %d, %d", ev.mouse.x, ev.mouse.y); 
                    break;
                } 
            }else if(ev.type == ALLEGRO_EVENT_DISPLAY_CLOSE){
                run = 0;
                break;
            }
        }
        delete match;
        //Clean da tela
	}

    al_destroy_display(display);
    al_destroy_event_queue(event_queue);
}

//Funções:

void drawn_pieces(Match &mat){
    mat.get_imagespices();
    int v[2];
     for(int i=0 ; i<8; i++){
        int xi = 0;
       for(int j=0 ; j<8; j++){
            int yi = 0;
            if(mat.image_pices[i][j] != ""){
                const char *c = mat.image_pices[i][j].c_str();
                ALLEGRO_BITMAP *image = al_load_bitmap(c);
                al_draw_bitmap(image, yi, xi, 0);
                al_destroy_bitmap(image);
                v[0] = i;
                v[1] = j;
                std::cout<<mat.bo->get_piece(v)->get_name();

            }
            yi += 30;
        } 
        xi += 10;
    }
}

int* array_to_pixel(int* spot){ 
   //ALTERADO PRO NOVO MENU 
    int *pixel;
    //para passar pra próxima casa (+68/69px)
    //eixo x
        // if(*(spot) % 2 == 0) 
            *pixel = 26 + (*(spot) * 69);
        // else
        //     *pixel = 27 + (*(spot) * 68);
    //eixo y
        // if(*(spot+1) % 2 == 0)
            *(pixel+1) = 127 + (*(spot+1) * 69);
        // else
        //     *(pixel+1) = 228 + (*(spot+1) * 68);

    return pixel;
}

int* pixel_to_array(int* pixel){
    //ALTERADO PRO NOVO MENU
    int *spot;
    //eixo x
    *pixel -= 26; //tira 26 pq as casas começam a partir do pixel 26
    *spot = (*pixel/69); //a cada 68 pixels, pula uma casa (pega só parte inteira da divisão)

    //eixo y
    *(pixel+1) -= 127; //tira 26 pq as casas começam a partir do pixel 26
    *(spot+1) = (*(pixel+1)/69); //a cada 68 pixels, pula uma casa (pega só parte inteira da divisão)

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