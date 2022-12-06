<h1 align="center"> TP-FINAL-PDS2-Xadrez </h1>

  Esse repositório tem por finalidade criar um jogo de **xadrez** em C++, para apresentação de um trabalho em grupo de "Programação e Desenvolvimento de Software II", da UFMG.


![Screenshot from 2022-12-05 22-30-01](https://user-images.githubusercontent.com/100977386/205787241-6948474c-3fff-48ed-9103-e61182a2ac8c.png)

## Resumo
  O xadrez é um jogo de tabuleiro, sendo também considerado como esporte. É disputado entre dois jogadores, utilizando-se de um tabuleiro e 16 peças, sendo representadas por peões, torres, cavalos, bispos, um rei e uma rainha. O objetivo é conquistar o rei de seu adversário.

  Os participantes irão jogar em um mesmo computador.
## Pré-requisitos
  Para jogar é preciso ter um compilador de C++ e a biblioteca Allegro instalada.

  Segue um link para página da biblioteca onde é ensinado a instalar nos diversos Sistemas Operacionais:
[clique aqui](https://liballeg.org/download.html)

## Compilação
  O makefile já está pronto para uso! Basta dar o comando make e deixá-lo fazer a mágica. Dessa foma, ele criará o arquivo executável na pasta build.

  Caso precise compilar novamente e apagar os arquivos criados anteriormente, o comando make clear pode ser usado, porém, naturalmente, quando se chama o comando make ele apaga as dependências criadas anteriormente.

  Para compilar os testes, bastar dar o comando make tests e ele criará os executaveis na pasta tests dentro de build.

## Funcionalidades
  As regras do xadrez tradicional também são válidas aqui, inclusive os movimentos especiais como Roque e promoção do peão.

  Para fechar o jogo basta pressionar "ESC" ou clicar no botão vermelho do canto superior direito. 

  Case deseje desistir, clique no botão "Give up" no canto superior direito.

  Pressione p para uma surpresa :3

## Como Usar
  Abra o jogo após compilar com o comando ./build/main

  Para mover um peça, basta clicar sobre ela, e em seguida, clicar sobre uma das posições válidas que serão mostradas na tela;
  
## Diagrama de Classes


## Participantes
* [Artur Gonçalves](https://github.com/arturgsz)
* [Enzo Magno](https://github.com/CarlosMagnanimo)
* [Gabriel Santos](https://github.com/santastico)
* [Gabriel Cruzati](https://github.com/GabrielCruzati)
* [Ronaldo Gonçalves](https://github.com/Ronaldo-gsa)
* [Wellington Porcel](https://github.com/WlPorcel)
