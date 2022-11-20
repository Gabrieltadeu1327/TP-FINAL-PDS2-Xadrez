#include "include/pieces/pawn.hpp"
#include <iostream>
#include <string>
#include <thread>
//#include "alegro.h"  COMO FAREMOS O INCLUDE DA BIBLIOTECA?

//COORDENADAS COMEÇAM COM (0,0) NO CANTO SUPERIOR ESQUERDO

/* COORDENAS (EM PIXEL) DO BOTAO DE START E RESET - (X,Y)

RETANGULO COM 1 COORDENADA SUPERIOR ESQUERDA, 2 COORDENADA INFERIOR ESQUERDA, 3 COORDENADA SUPERIOR DIREITA, 4 COORDENADA INFERIOR DIREITA
- START: (55 , 108) | (55 , 160) | (187 , 108) | (187 , 160)
- RESET: (204 , 118) | (204 , 152) | (294 , 118) | (294 , 152)
*/

/* COORDENAS (EM PIXEL) DE CADA CASA DO TABULEIRO - (X,Y)

PIXEL DO PONTO SUPERIOR ESQUERDO DE CADA CASA

8A = (26,2 , 226,0) | 8B = (95 , 226,0) | 8C = (163,7 , 226,0) | 8D = (232,4 , 226,0) | 8E = (300,5 , 226,0) | 8F = (369,6 , 226,0) | 8G = (437,5 , 226,0) | 8H = (507 , 226,0)

7A = (26,2 , 295,4) | 7B = (95 , 295,4) | 7C = (163,7 , 295,4) | 7D = (232,4 , 295,4) | 7E = (300,5 , 295,4) | 7F = (369,6 , 295,4) | 7G = (437,5 , 295,4) | 7H = (507 , 295,4)

6A = (26,2 , 363,5) | 6B = (95 , 363,5) | 6C = (163,7 , 363,5) | 6D = (232,4 , 363,5) | 6E = (300,5 , 363,5) | 6F = (369,6 , 363,5) | 6G = (437,5 , 363,5) | 6H = (507 , 363,5)

5A = (26,2 , 432,8) | 5B = (95 , 432,8) | 5C = (163,7 , 432,8) | 5D = (232,4 , 432,8) | 5E = (300,5 , 432,8) | 5F = (369,6 , 432,8) | 5G = (437,5 , 432,8) | 5H = (507 , 432,8)

4A = (26,2 , 500,5) | 4B = (95 , 500,5) | 4C = (163,7 , 500,5) | 4D = (232,4 , 500,5) | 4E = (300,5 , 500,5) | 4F = (369,6 , 500,5) | 4G = (437,5 , 500,5) | 4H = (507 , 500,5)

3A = (26,2 , 569,7) | 3B = (95 , 569,7) | 3C = (163,7 , 569,7) | 3D = (232,4 , 569,7) | 3E = (300,5 , 569,7) | 3F = (369,6 , 569,7) | 3G = (437,5 , 569,7) | 3H = (507 , 569,7)

2A = (26,2 , 637,8) | 2B = (95 , 637,8) | 2C = (163,7 , 637,8) | 2D = (232,4 , 637,8) | 2E = (300,5 , 637,8) | 2F = (369,6 , 637,8) | 2G = (437,5 , 637,8) | 2H = (507 , 637,8)

1A = (26,2 , 707,1) | 1B = (95 , 707,1) | 1C = (163,7 , 707,1) | 1D = (232,4 , 707,1) | 1E = (300,5 , 707,1) | 1F = (369,6 , 707,1) | 1G = (437,5 , 707,1) | 1H = (507 , 707,1)
*/



//FUNÇÕES DO ALLEGRO
void init();
void deinit();


int main(){

    std::thread







	//ABRIR JANELA INTERFACE - APENAS COM O TABULEIRO (AINDA EM BRANCO)
	init();
    while (!key[KEY_ESC]) { /*Enquanto a tecla ESC não for pressionada, irá
    executar o código especificado */

    //CÓDIGO A SER EXECUTADO PRA FUNCIONAR A INTERFACE DO GAME;

    //inicializando imagem board:
    //VERIFICAR oq é esse screen  = (buffer (imagem) destino)
    blit(chess_board, screen, 0, 0, 600, 800, 600, 800);

    }
    deinit();
    return 0;
}

    END_OF_MAIN() /* Macro necessária para o funcionamento da Allegro
    Sempre deve ser utilizada no final da função main*/


void init() {
    //INICIALIZAÇÕES PADRÃO:
    int depth, res;
    allegro_init(); /* Inicializa a Allegro */
    depth = desktop_color_depth(); /* Retorna a profundidade de cores usadas no Desktop */
    if (depth == 0) depth = 32;
    set_color_depth(depth); /* Define a profundidade de cor que será usada */
    /* Seleciona o modo gráfico a ser exibido. Neste caso, será em janela (poderia ser FullScreen, por exemplo),
	com tamanho 600 x 800 (TAMANHO DA IMAGEM DO TABULEIRO)*/
    res = set_gfx_mode(GFX_AUTODETECT_WINDOWED, 600, 800, 0, 0);
    if (res != 0) {
    allegro_message("ERRO ao inicializar programa"1); /* Exibe mensagem em caso de erro */
    exit(-1);
    }
    install_timer(); /* Instala o handler de tempo da Allegro */
    install_keyboard(); /* Instala o handler de teclado da Allegro */
    install_mouse(); /* Instala o handler de mouse da Allegro */

    /* Outras possíveis inicializações */


	//MUDAR / CONFERIR ENDEREÇO DA IMAGEM DO TABULEIRO;
    BITMAP *chess_board = load_bitmap("Imagens\\Peças Redimensionadas\\Menu_Chess_BMP.bmp", NULL);

}
void deinit() {
    clear_keybuf(); /* Limpa o buffer do teclado */
    /* Outras possíveis desinicializações */

    void destroy_bitmap(BITMAP *chess_board);
}