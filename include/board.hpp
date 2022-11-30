/**
 * @file board.hpp
 * @author group
 * @brief superclasse com a lógica do board
 * @version 0.1
 * @date 2022-11-28
 * @details aqui tratamos as relações que ocorrem entre as peças.
 * Cada função aqui descrita retorna para main valores que serão
 * utilizados durante o processamento de cada jogada feita.
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>
#include "pieces/piece.hpp"
#include "pieces/bishop.hpp"
#include "pieces/pawn.hpp"
#include "pieces/knight.hpp"
#include "pieces/king.hpp"
#include "pieces/queen.hpp"
#include "pieces/rook.hpp"

/**
 * @brief cria a matriz do tabuleiro, as matrizes de ataque, as funções a serem chamadas na main
 * @details criação do tabuleiro 8x8, da matriz de ataque de peças brancas 8x8 e pretas 8x8, 
 *  criação da função que recebe a posição da peça, da função que apresenta no tabuleiro os movimentos possíveis,
 *  a função que move a peça de um ponto inicial para um final, as funções de atualização e verificação de nulidade de 
 *  um ponteiro.
 */ 
class Board{

    private:
        Piece* board[8][8];

//Matrizes de ataque
        int white_atc_mat[8][8];
        int black_atc_mat[8][8];

    public:
    
        Board();
        ~Board();

        /**
         * @brief Envia um poteiro correspondente ao ponto da peça
         * @details O ponteiro gerado é utilizado em outras funções,
         * como get_color.
         * 
         * @param spot ponto atual da peça, necessário para gerar o ponteiro.
         * @return Piece* 
         */
        Piece* get_piece(int* spot);

        /**
         * @brief Define movimentos válidos
         * @details Além de definir os possíveis movimentos,
         * a função define os movimentos válidos, excluindo da matriz
         * possíveis movimentos inválidos.
         * 
         * @param spot ponto atual da peça, necessário para gerar o ponteiro. 
         * @param mat matriz correspondente as posições das peças.
         */
        void def_valid_moviments(int* spot, int mat[8][8]); 

        /**
         * @brief Muda a posição da peça e trata movimentos especiais
         * @details Função que altera a posição da peça, tirando ela do seu 
         * ponto inicial, levando para o ponto final. Além de cuidar das movimentações
         * especiais, como promotion e roque.
         * 
         * @param atual_spot ponto atual da peça.
         * @param spot ponto final da peça.
         */
        void set_piece(int* atual_spot, int* spot);

        /**
         * @brief retorna o endereço da imagem da peça
         * @details acessa o endereço de memória da imagem da peça
         * retornando assim, o endereço para que consigamos ter as imagens na interface.
         * 
         * @param spot ponto da peça.
         * @return std::string endereço de imagem da respectiva peça.
         */
        std::string get_image(int* spot);

        /**
         * @brief Descobre a cor da peça
         * @details Acessa a peça e retorna sua cor.
         * 
         * @param spot ponto da peça.
         * @return std::string cor da peça.
         */
        std::string get_collor(int* spot);
        
        /**
         * @brief Atualiza a matriz de ataque
         * @details Recebendo a cor da peça, é possível determinar sua matriz 
         * de ataque. 
         * 
         * @param cor cor da peça. 
         */
        void refresh_atc_matriz(string cor);

        /**
         * @brief Determina se o rei está em cheque
         * @details Podemos determinar se o rei está em posição de cheque
         * ou não.
         * 
         * @param color cor da peça. 
         * @return true sim, cheque.
         * @return false não, sem cheque.
         */
        bool ischeque(std::string color);


};

#endif