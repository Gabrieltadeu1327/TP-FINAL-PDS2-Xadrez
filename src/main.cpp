#include <allegro5/allegro.h>
#include <stdio.h>
#include <iostream>

const int SC_W = 960;
const int SC_H = 540;

int main(){
	std::cout<<"main";
	ALLEGRO_DISPLAY *display = NULL;

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