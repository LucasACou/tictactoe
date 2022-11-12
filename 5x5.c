    0   1   2   3   4  
  ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
0 █ x █ x █ x █ x █ x █
  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█
1 █ x █ x █ x █ x █ x █
  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█
2 █ x █ x █ x █ x █ x █
  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█
3 █ x █ x █ x █ x █ x █
  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█
4 █ x █ x █ x █ x █ x █
  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█

#include <stdio.h>
#include <stdlib.h>

int main(){
  int fim_de_jogo = 0;
  int jogadas = 1;
  int linha, coluna;
  char tabuleiro1[3][3] = {
  {' ', ' ', ' '},
  {' ', ' ', ' '},
  {' ', ' ', ' '}
  };
  char tabuleiro2[4][4] = {
  {' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' '}
  };
  char tabuleiro3[5][5] = {
  {' ', ' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' ', ' '},
  {' ', ' ', ' ', ' ', ' '},
  };


      do {
    system("clear");

    //tabuleiro3
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █ %c █\n", tabuleiro3[0][0], tabuleiro3[0][1], tabuleiro3[0][2], tabuleiro3[0][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
    printf(" █ %c █ %c █ %c █ %c █\n", tabuleiro3[1][0], tabuleiro3[1][1], tabuleiro3[1][2], tabuleiro3[1][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
    printf(" █ %c █ %c █ %c █ %c █\n", tabuleiro3[2][0], tabuleiro3[2][1], tabuleiro3[2][2], tabuleiro3[2][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
    printf(" █ %c █ %c █ %c █ %c █\n", tabuleiro3[3][0], tabuleiro3[3][1], tabuleiro3[3][2], tabuleiro3[3][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");

    printf("\nEscolha as casas pra jogar:");
    
    do {
      int casa_jogada;
      scanf("%d", &casa_jogada);
        casa_jogada = casa_jogada - 1;
        linha = casa_jogada/4;
        coluna = casa_jogada%4;
      
      if(tabuleiro3[linha][coluna] == 'x' || tabuleiro3[linha][coluna] == 'o') {
        printf("\nCasa ja ocupada, escolha outra casa:");
      }
    }while (tabuleiro3[linha][coluna] == 'x' || tabuleiro3[linha][coluna] == 'o');

    

    //player1
    
    if (jogadas == 1){
      tabuleiro3[linha][coluna] = 'x';
      jogadas = 0;
    }

    //player 2
      
    else if (jogadas == 0){
      tabuleiro3[linha][coluna] = 'o';
      jogadas = 1;
    }



    
    if(tabuleiro3[0][0]=='x' && tabuleiro3[0][1]== 'x' && tabuleiro3[0][2] == 'x' && tabuleiro3[0][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[1][0]=='x' && tabuleiro3[1][1]== 'x' && tabuleiro3[1][2] == 'x' && tabuleiro3[1][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[2][0]=='x' && tabuleiro3[2][1]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[2][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[3][0]=='x' && tabuleiro3[3][1]== 'x' && tabuleiro3[3][2] == 'x' && tabuleiro3[3][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro3[0][0]=='x' && tabuleiro3[1][0]== 'x' && tabuleiro3[2][0] == 'x' && tabuleiro3[3][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][1]=='x' && tabuleiro3[1][1]== 'x' && tabuleiro3[2][1] == 'x' && tabuleiro3[3][1] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][2]=='x' && tabuleiro3[1][2]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[3][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][3]=='x' && tabuleiro3[1][3]== 'x' && tabuleiro3[2][3] == 'x' && tabuleiro3[3][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro3[0][0]=='x' && tabuleiro3[1][1]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[3][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][3]=='x' && tabuleiro3[1][2]== 'x' && tabuleiro3[2][1] == 'x' && tabuleiro3[3][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }

    if(tabuleiro3[0][0]=='o' && tabuleiro3[0][1]== 'o' && tabuleiro3[0][2] == 'o' && tabuleiro3[0][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[1][0]=='o' && tabuleiro3[1][1]== 'o' && tabuleiro3[1][2] == 'o' && tabuleiro3[1][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[2][0]=='o' && tabuleiro3[2][1]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[2][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[3][0]=='o' && tabuleiro3[3][1]== 'o' && tabuleiro3[3][2] == 'o' && tabuleiro3[3][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro3[0][0]=='o' && tabuleiro3[1][0]== 'o' && tabuleiro3[2][0] == 'o' && tabuleiro3[3][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][1]=='o' && tabuleiro3[1][1]== 'o' && tabuleiro3[2][1] == 'o' && tabuleiro3[3][1] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][2]=='o' && tabuleiro3[1][2]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[3][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][3]=='o' && tabuleiro3[1][3]== 'o' && tabuleiro3[2][3] == 'o' && tabuleiro3[3][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro3[0][0]=='o' && tabuleiro3[1][1]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[3][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][3]=='o' && tabuleiro3[1][2]== 'o' && tabuleiro3[2][1] == 'o' && tabuleiro3[3][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }

    int todos_preenchidos = 1;
    
      for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
          if(tabuleiro3[i][j] == ' ')
            todos_preenchidos = 0;
        }
      }
      if(todos_preenchidos == 1 && fim_de_jogo == 0){
        printf("deu velha");
        fim_de_jogo = 1;
      }
        
  } while(fim_de_jogo == 0);
  
  
  
  return 0;
  }