 ![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
 ![Git](https://img.shields.io/badge/git-%23F05033.svg?style=for-the-badge&logo=git&logoColor=white)
 ![Visual Studio Code](https://img.shields.io/badge/Visual%20Studio%20Code-0078d7.svg?style=for-the-badge&logo=visual-studio-code&logoColor=white)
<h1 align="center"> TP-FINAL-PDS2-Xadrez </h1>


  Esse repositório tem por finalidade criar um jogo de plataforma inspirado no jogo  **Mario** em C++, para apresentação de um trabalho em grupo de "Programação e Desenvolvimento de Software II", da UFMG.


![Screenshot from 2022-12-05 22-30-01](https://user-images.githubusercontent.com/100977386/205787241-6948474c-3fff-48ed-9103-e61182a2ac8c.png)

## Resumo
   Mario é um jogo de plataformaa cujo o objetivo principal é fazer com que o personagem principal, Mario, chegue até o castelo e salve a Princesa Peach. Para isso, ele deverá passar por diversos obstáculos, como subir em plataformas, e enfrentar alguns inimigos. Ao longo do game, Mario pode adquirir alguns poderes, como aumentar de tamanho e ficar mais rápido, através do power-up mas o mesmo também poderar fazer com que o jogador fique apenas com uma vida restante, uma vez que ele inicia o jogo com 3 vidas. Ao longo de sua jornada, o jogador também irá acumular pontos e moedas que podem  ser recolhidos ao longo do jogo.

   
    
 

  
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
  
## Stories

![stories1](https://user-images.githubusercontent.com/100977386/205797204-801a2ac7-4e13-4269-a094-89e70d80524b.png)

## Diagrama de Classes

![Diagram Chess PDS2](https://user-images.githubusercontent.com/100977386/205932826-31b8665a-24c2-46c9-8154-7c1c560c7fb7.png)


## Participantes
* [Artur Gonçalves](https://github.com/arturgsz)
* [Enzo Magno](https://github.com/CarlosMagnanimo)
* [Gabriel Santos](https://github.com/santastico)
* [Gabriel Cruzati](https://github.com/GabrielCruzati)
* [Ronaldo Gonçalves](https://github.com/Ronaldo-gsa)
* [Wellington Porcel](https://github.com/WlPorcel)
