#include <stdio.h>
#include <stdlib.h>
// define as cores
#define color_red "\e[0;31m"
#define color_purple "\e[0;35m"
#define color_cyan "\e[0;36m"
#define color_reset "\e[0m"

int main()
{
  
  int fim_de_jogo = 0;
  int jogadas = 1;
  int linha, coluna;
  char tabuleiro[3][3] = {
  {' ', ' ', ' '},
  {' ', ' ', ' '},
  {' ', ' ', ' '}
  };

  system("clear");
  
  printf(color_purple "██████████  ██  ████████\n");
  printf("    ██      ██  ██\n");
  printf("    ██      ██  ██\n");
  printf("    ██      ██  ██\n");
  printf("    ██      ██  ████████\n" color_reset);
  printf("\n");

  printf(color_cyan "██████████  ██████  ████████\n");
  printf("    ██      ██  ██  ██\n");
  printf("    ██      ██████  ██\n");
  printf("    ██      ██  ██  ██\n");
  printf("    ██      ██  ██  ████████\n" color_reset);
  printf("\n");

  printf(color_red "██████████  ██████  ████████\n");
  printf("    ██      ██  ██  ██\n");
  printf("    ██      ██  ██  ████████\n");
  printf("    ██      ██  ██  ██\n");
  printf("    ██      ██████  ████████\n" color_reset);
  printf("\n");

  int x = 0;

  do {
    printf("MENU\n");
    printf("[1] - Jogar\n");
    printf("[2] - Opções\n");
    scanf("%d", &x);

    if(x == 2){
      printf("opções\n");
    }
    else {
      puts("erro!");
    }
  
  } while (x != 1);

  
  do {
    system("clear");
    
    printf(color_red "    0   1   2\n" color_reset);
    printf("  ▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(color_red"0"color_reset" █ %c █ %c █ %c █\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf("  █▄▄▄█▄▄▄█▄▄▄█\n");
    printf(color_red"1"color_reset" █ %c █ %c █ %c █\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf("  █▄▄▄█▄▄▄█▄▄▄█\n");
    printf(color_red"2"color_reset" █ %c █ %c █ %c █\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf("  █▄▄▄█▄▄▄█▄▄▄█\n");

    printf("\nEscolha as casas pra jogar:");
    scanf("%d %d", &linha , &coluna);
  
    if (jogadas == 1){
      tabuleiro[linha][coluna] = 'x';   //player1
      jogadas = 0;
    }
    else if (jogadas == 0){
      tabuleiro[linha][coluna] = 'o';  //player 2
      jogadas = 1;
    }
    
  } while(fim_de_jogo == 0);
  
  
  
  return 0;
}