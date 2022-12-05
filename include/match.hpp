/**
 * @file match.hpp
 * @author group
 * @brief Superclasse com a lógica da match.
 * @version 0.1
 * @date 2022-11-28
 * @details Aqui é onde atualizamos a interface da partida, recebendo interações
 * com o tabuleiro e determinamos um vencedor.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <string>
#include <exception>
#include "board.hpp"

/**
 * @brief É a partida, literalmente, recebe as interações no tabuleiro e dá andamento ao jogo.
 * @details A classe é capaz de atualizar a imagem do tabuleiro, à medida que o usuário
 *  dá clicks na tela. A classe também seta o turno, casos de desistência e casos onde 
 *  existe vitória. 
 * 
 */
class Match{

std::string turn = "White";
std::string winner = "";
bool selected = false;
int last_spot[2];

public:
    
    Board *bo = new Board();
    std::string image_pices[8][8];
    std::string image_dots[8][8];
    
    Match();
    ~Match();
    //Recebe clicks NO TABULEIRO

    /**
     * @brief Gerencia o andamento do jogo, chamando as demais funções do código.
     * @details A partir do ponto clicado pelo usuário, a função game() chama as demais
     *  funções do código, de modo a dar andamento ao jogo, ela é literalmente o técnico do time,
     * uma vez que organiza o funcionamento geral do xadrez.
     * 
     * @param spot A função tem por parâmetro de entrada o pixel clicado pelo usuário, 
     *  convertido em algum pedaço do tabuleiro.
     */
    void game(int spot[2]);

    /**
     * @brief Atualiza a matriz de imagens das peças presentes no tabuleiro.
     * @details Percorre todos os pontos do tabuleiro, captando suas respectivas
     *  imagens e atualizando uma a uma.
     */
    void refresh_imagespices();

    /**
     * @brief 
     * 
     */
    void refresh_imagesdots();

    /**
     * @brief Retorna o vencedor do jogo.
     * @details Caso exista um 'winner', a função getwinner, deve retornar uma string
     *  que diga qual cor venceu o jogo, sendo o jogador 'Black' ou 'White'.
     * 
     * @return std::string É o player vencedor do jogo, 'Black' ou 'White'.
     */
    std::string getwinner();

    /**
     * @brief Retorna qual cor deve jogar.
     * @details Caso o jogo esteja em andamento, a função get_turn, deve retornar uma string 
     *  que diga qual cor deve realizar a jogada, senda ela 'Black turn' ou 'White turn'.
     * 
     * @return std::string É o player que deve realizar a jogada, 'Black' ou 'White'.
     */
    std::string get_turn();

    /**
     * @brief Define um vencedor, caso haja desistência.
     * @details A função define um vencedor, caso o player que deve realizar a jogada, clicke em 
     * give up, nesse caso, o vencedor o player de cor oposta.
     * 
     */
    void p_gaveup();

};

class InvalidSpotExeption: public exception{
    const char* _message;
    public:
    InvalidSpotExeption();
    const char* what() const noexcept;
};

