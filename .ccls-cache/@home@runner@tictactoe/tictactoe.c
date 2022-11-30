#include <stdio.h>
#include <stdlib.h>
#include<string.h>
// define as cores
#define color_red "\e[0;31m"
#define color_purple "\e[0;35m"
#define color_cyan "\e[0;36m"
#define color_reset "\e[0m"

int main()
{
  char casa_jogadachar[3] = {'\0','\0','\0'};
  int casa_jogadaint;
  int jogada_inexistente = 0;
  int fim_de_jogo = 0;
  int jogadas = 1;
  int linha, coluna;
  char tabuleiro[3][3] = {
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

  system("clear");

  //arte do menu
  
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

  char menu_principal = '0';

  do {
    
    printf("\n");
    printf("[1] - Jogar\n");
    printf("[2] - Creditos\n>");
    scanf("%s", &menu_principal);

    if(menu_principal == '2'){
      system ("clear");
      printf("####################################\n");
      printf("|                                  |\n");
      printf("|"color_purple"         TIC"color_cyan" TAC"color_red" TOE"color_reset" IN C         |\n");
      printf("|                                  |\n");
      printf("|                By                |\n");
      printf("|                                  |\n");
      printf("|         -Lucas Assunção          |\n");
      printf("|         -Lucas Calabresi         |\n");
      printf("|                                  |\n");
      printf("####################################\n");
    }
    else if(menu_principal != '2' || menu_principal != '1'){
      system("clear");
      
      puts(color_red"\nOpção inválida!"color_reset);
    }
     
  } while (menu_principal != '1');

  
  char menu_dificuldade;
  system ("clear");
  
  do{
  
  printf("\n");
  printf("[1] - 3x3\n");
  printf("[2] - 4x4\n");
  printf("[3] - 5x5\n>");
  scanf("%s", &menu_dificuldade);

  switch(menu_dificuldade){
    case '1':
      do {
    system("clear");

    //tabuleiro
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █       1 | 2 | 3\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█      ___|___|___\n");
    printf(" █ %c █ %c █ %c █       4 | 5 | 6\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█      ___|___|___\n");
    printf(" █ %c █ %c █ %c █       7 | 8 | 9\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█         |   |\n");

    printf("\nEscolha a casa pra jogar:\n>");
    
    do {
    
      do{ 
        scanf("%s", casa_jogadachar);
          if(casa_jogadachar[0] >= '1' && casa_jogadachar[0] <= '9'){
            casa_jogadaint = casa_jogadachar[0] - '0';
            jogada_inexistente = 1;
          }
          else{
            printf("\nCasa inesxistente, escolha outra:\n>");
            jogada_inexistente = 0;
        }
      }while(jogada_inexistente == 0);
      
        casa_jogadaint = casa_jogadaint - 1;
        linha = casa_jogadaint/3;
        coluna = casa_jogadaint%3;
      
      if(tabuleiro[linha][coluna] == 'x' || tabuleiro[linha][coluna] == 'o') {
        printf("\nCasa ja ocupada, escolha outra casa:\n>");
      }
    }while (tabuleiro[linha][coluna] == 'x' || tabuleiro[linha][coluna] == 'o');

    

    //player1
    
    if (jogadas == 1){
      tabuleiro[linha][coluna] = 'x';
      jogadas = 0;
    }

    //player 2
      
    else if (jogadas == 0){
      tabuleiro[linha][coluna] = 'o';
      jogadas = 1;
    }
        
      system("clear");

    //tabuleiro
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █       1 | 2 | 3\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█      ___|___|___\n");
    printf(" █ %c █ %c █ %c █       4 | 5 | 6\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█      ___|___|___\n");
    printf(" █ %c █ %c █ %c █       7 | 8 | 9\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█         |   |\n");

    printf("\nEscolha a casa pra jogar:\n");

    
    if(tabuleiro[0][0]=='x' && tabuleiro[0][1]== 'x' && tabuleiro[0][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro[1][0]=='x' && tabuleiro[1][1]== 'x' && tabuleiro[1][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro[2][0]=='x' && tabuleiro[2][1]== 'x' && tabuleiro[2][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro[0][0]=='x' && tabuleiro[1][0]== 'x' && tabuleiro[2][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro[0][1]=='x' && tabuleiro[1][1]== 'x' && tabuleiro[2][1] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro[0][2]=='x' && tabuleiro[1][2]== 'x' && tabuleiro[2][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro[0][0]=='x' && tabuleiro[1][1]== 'x' && tabuleiro[2][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro[0][2]=='x' && tabuleiro[1][1]== 'x' && tabuleiro[2][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }

    if(tabuleiro[0][0]=='o' && tabuleiro[0][1]== 'o' && tabuleiro[0][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro[1][0]=='o' && tabuleiro[1][1]== 'o' && tabuleiro[1][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro[2][0]=='o' && tabuleiro[2][1]== 'o' && tabuleiro[2][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro[0][0]=='o' && tabuleiro[1][0]== 'o' && tabuleiro[2][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro[0][1]=='o' && tabuleiro[1][1]== 'o' && tabuleiro[2][1] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro[0][2]=='o' && tabuleiro[1][2]== 'o' && tabuleiro[2][2] == 'o'){ 
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro[0][0]=='o' && tabuleiro[1][1]== 'o' && tabuleiro[2][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro[0][2]=='o' && tabuleiro[1][1]== 'o' && tabuleiro[2][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }

    int todos_preenchidos = 1;
    
      for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
          if(tabuleiro[i][j] == ' ')
            todos_preenchidos = 0;
        }
      }
      if(todos_preenchidos == 1 && fim_de_jogo == 0){
        printf("deu velha");
        fim_de_jogo = 1;
      }

    if(fim_de_jogo == 1) {
      int jogar_novamente = 0;
      printf("\nDeseja jogar novamente?\n");
      printf("[1] - sim\n");
      printf("[2] - nao\n>");
      scanf("%d", &jogar_novamente);
      if(jogar_novamente == 1) {
        fim_de_jogo = 0;

        // limpar tabuleiro
        for(int k = 0; k<3; k++) {
          for(int l = 0; l<3; l++) {
            tabuleiro[k][l] = ' ';
          }
        }
        break;
      }
    }
        
  } while(fim_de_jogo == 0);
    break;

    
    case '2':
          do {
    system("clear");

    //tabuleiro2
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █ %c █        1 |  2 |  3 |  4\n", tabuleiro2[0][0], tabuleiro2[0][1], tabuleiro2[0][2], tabuleiro2[0][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █        5 |  6 |  7 |  8\n", tabuleiro2[1][0], tabuleiro2[1][1], tabuleiro2[1][2], tabuleiro2[1][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █        9 | 10 | 11 | 12\n", tabuleiro2[2][0], tabuleiro2[2][1], tabuleiro2[2][2], tabuleiro2[2][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █       13 | 14 | 15 | 16\n", tabuleiro2[3][0], tabuleiro2[3][1], tabuleiro2[3][2], tabuleiro2[3][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█          |    |    |\n");

    printf("\nEscolha a casa pra jogar:\n>");
    
    do {
      
      do {
        scanf("%s", casa_jogadachar);
        casa_jogadaint = atoi(casa_jogadachar);
        if(casa_jogadaint >= 1 && casa_jogadaint <= 16){
          jogada_inexistente = 1;
        }
        else{
          printf("\nCasa inesxistente, escolha outra:\n>");
          jogada_inexistente = 0;
        }
      }while (jogada_inexistente == 0);
      
        casa_jogadaint = casa_jogadaint - 1;
        linha = casa_jogadaint / 4;
        coluna = casa_jogadaint % 4;
      
      if(tabuleiro2[linha][coluna] == 'x' || tabuleiro2[linha][coluna] == 'o') {
        printf("\nCasa ja ocupada, escolha outra casa:\n>");
      }
    }while (tabuleiro2[linha][coluna] == 'x' || tabuleiro2[linha][coluna] == 'o');

    

    //player1
    
    if (jogadas == 1){
      tabuleiro2[linha][coluna] = 'x';
      jogadas = 0;
    }

    //player 2
      
    else if (jogadas == 0){
      tabuleiro2[linha][coluna] = 'o';
      jogadas = 1;
    }

    system("clear");

    //tabuleiro2
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █ %c █        1 |  2 |  3 |  4\n", tabuleiro2[0][0], tabuleiro2[0][1], tabuleiro2[0][2], tabuleiro2[0][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █        5 |  6 |  7 |  8\n", tabuleiro2[1][0], tabuleiro2[1][1], tabuleiro2[1][2], tabuleiro2[1][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █        9 | 10 | 11 | 12\n", tabuleiro2[2][0], tabuleiro2[2][1], tabuleiro2[2][2], tabuleiro2[2][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █       13 | 14 | 15 | 16\n", tabuleiro2[3][0], tabuleiro2[3][1], tabuleiro2[3][2], tabuleiro2[3][3]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█          |    |    |\n");

    printf("\nEscolha a casa pra jogar:\n");

    
    if(tabuleiro2[0][0]=='x' && tabuleiro2[0][1]== 'x' && tabuleiro2[0][2] == 'x' && tabuleiro2[0][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[1][0]=='x' && tabuleiro2[1][1]== 'x' && tabuleiro2[1][2] == 'x' && tabuleiro2[1][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[2][0]=='x' && tabuleiro2[2][1]== 'x' && tabuleiro2[2][2] == 'x' && tabuleiro2[2][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[3][0]=='x' && tabuleiro2[3][1]== 'x' && tabuleiro2[3][2] == 'x' && tabuleiro2[3][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro2[0][0]=='x' && tabuleiro2[1][0]== 'x' && tabuleiro2[2][0] == 'x' && tabuleiro2[3][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[0][1]=='x' && tabuleiro2[1][1]== 'x' && tabuleiro2[2][1] == 'x' && tabuleiro2[3][1] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[0][2]=='x' && tabuleiro2[1][2]== 'x' && tabuleiro2[2][2] == 'x' && tabuleiro2[3][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[0][3]=='x' && tabuleiro2[1][3]== 'x' && tabuleiro2[2][3] == 'x' && tabuleiro2[3][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro2[0][0]=='x' && tabuleiro2[1][1]== 'x' && tabuleiro2[2][2] == 'x' && tabuleiro2[3][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro2[0][3]=='x' && tabuleiro2[1][2]== 'x' && tabuleiro2[2][1] == 'x' && tabuleiro2[3][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }

    if(tabuleiro2[0][0]=='o' && tabuleiro2[0][1]== 'o' && tabuleiro2[0][2] == 'o' && tabuleiro2[0][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[1][0]=='o' && tabuleiro2[1][1]== 'o' && tabuleiro2[1][2] == 'o' && tabuleiro2[1][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[2][0]=='o' && tabuleiro2[2][1]== 'o' && tabuleiro2[2][2] == 'o' && tabuleiro2[2][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[3][0]=='o' && tabuleiro2[3][1]== 'o' && tabuleiro2[3][2] == 'o' && tabuleiro2[3][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro2[0][0]=='o' && tabuleiro2[1][0]== 'o' && tabuleiro2[2][0] == 'o' && tabuleiro2[3][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[0][1]=='o' && tabuleiro2[1][1]== 'o' && tabuleiro2[2][1] == 'o' && tabuleiro2[3][1] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[0][2]=='o' && tabuleiro2[1][2]== 'o' && tabuleiro2[2][2] == 'o' && tabuleiro2[3][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[0][3]=='o' && tabuleiro2[1][3]== 'o' && tabuleiro2[2][3] == 'o' && tabuleiro2[3][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro2[0][0]=='o' && tabuleiro2[1][1]== 'o' && tabuleiro2[2][2] == 'o' && tabuleiro2[3][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro2[0][3]=='o' && tabuleiro2[1][2]== 'o' && tabuleiro2[2][1] == 'o' && tabuleiro2[3][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }

    int todos_preenchidos = 1;
    
      for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
          if(tabuleiro2[i][j] == ' ')
            todos_preenchidos = 0;
        }
      }
      if(todos_preenchidos == 1 && fim_de_jogo == 0){
        printf("\ndeu velha\n");
        fim_de_jogo = 1;
      }
            
    if(fim_de_jogo == 1) {
      int jogar_novamente = 0;
      printf("\nDeseja jogar novamente?\n");
      printf("[1] - sim\n");
      printf("[2] - nao\n>");
      scanf("%d", &jogar_novamente);
      if(jogar_novamente == 1) {
        fim_de_jogo = 0;

        // limpar tabuleiro
        for(int k = 0; k<4; k++) {
          for(int l = 0; l<4; l++) {
            tabuleiro2[k][l] = ' ';
          }
        }
        break;
      }
    }
            
  } while(fim_de_jogo == 0);
    break;

    
    case '3':
            do {
    system("clear");

    //tabuleiro3
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █        1 |  2 |  3 |  4 |  5\n", tabuleiro3[0][0], tabuleiro3[0][1], tabuleiro3[0][2], tabuleiro3[0][3], tabuleiro3[0][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █        6 |  7 |  8 |  9 | 10\n", tabuleiro3[1][0], tabuleiro3[1][1], tabuleiro3[1][2], tabuleiro3[1][3], tabuleiro3[1][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █       11 | 12 | 13 | 14 | 15\n", tabuleiro3[2][0], tabuleiro3[2][1], tabuleiro3[2][2], tabuleiro3[2][3], tabuleiro3[2][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █       16 | 17 | 18 | 19 | 20\n", tabuleiro3[3][0], tabuleiro3[3][1], tabuleiro3[3][2], tabuleiro3[3][3], tabuleiro3[3][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █       21 | 22 | 23 | 24 | 25\n", tabuleiro3[4][0], tabuleiro3[4][1], tabuleiro3[4][2], tabuleiro3[4][3], tabuleiro3[4][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█          |    |    |    |\n");

    printf("\nEscolha a casa pra jogar:\n>");
    
    do {
      do {
        scanf("%s", casa_jogadachar);
        casa_jogadaint = atoi(casa_jogadachar);
        if(casa_jogadaint >= 1 && casa_jogadaint <= 25){
          jogada_inexistente = 1;
        }
        else{
          printf("\nCasa inesxistente, escolha outra:\n>");
          jogada_inexistente = 0;
        }
      }while (jogada_inexistente == 0);
      
        casa_jogadaint = casa_jogadaint - 1;
        linha = casa_jogadaint / 5;
        coluna = casa_jogadaint % 5;
      
      if(tabuleiro3[linha][coluna] == 'x' || tabuleiro3[linha][coluna] == 'o') {
        printf("\nCasa ja ocupada, escolha outra casa:\n>");
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

    system("clear");

    //tabuleiro3
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █        1 |  2 |  3 |  4 |  5\n", tabuleiro3[0][0], tabuleiro3[0][1], tabuleiro3[0][2], tabuleiro3[0][3], tabuleiro3[0][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █        6 |  7 |  8 |  9 | 10\n", tabuleiro3[1][0], tabuleiro3[1][1], tabuleiro3[1][2], tabuleiro3[1][3], tabuleiro3[1][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █       11 | 12 | 13 | 14 | 15\n", tabuleiro3[2][0], tabuleiro3[2][1], tabuleiro3[2][2], tabuleiro3[2][3], tabuleiro3[2][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █       16 | 17 | 18 | 19 | 20\n", tabuleiro3[3][0], tabuleiro3[3][1], tabuleiro3[3][2], tabuleiro3[3][3], tabuleiro3[3][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█      ____|____|____|____|____\n");
    printf(" █ %c █ %c █ %c █ %c █ %c █       21 | 22 | 23 | 24 | 25\n", tabuleiro3[4][0], tabuleiro3[4][1], tabuleiro3[4][2], tabuleiro3[4][3], tabuleiro3[4][4]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█          |    |    |    |\n");

    printf("\nEscolha a casa pra jogar:\n");

    
    if(tabuleiro3[0][0]=='x' && tabuleiro3[0][1]== 'x' && tabuleiro3[0][2] == 'x' && tabuleiro3[0][3] == 'x' && tabuleiro3[0][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[1][0]=='x' && tabuleiro3[1][1]== 'x' && tabuleiro3[1][2] == 'x' && tabuleiro3[1][3] == 'x' && tabuleiro3[1][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[2][0]=='x' && tabuleiro3[2][1]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[2][3] == 'x' && tabuleiro3[2][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[3][0]=='x' && tabuleiro3[3][1]== 'x' && tabuleiro3[3][2] == 'x' && tabuleiro3[3][3] == 'x' && tabuleiro3[3][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[4][0]=='x' && tabuleiro3[4][1]== 'x' && tabuleiro3[4][2] == 'x' && tabuleiro3[4][3] == 'x' && tabuleiro3[4][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro3[0][0]=='x' && tabuleiro3[1][0]== 'x' && tabuleiro3[2][0] == 'x' && tabuleiro3[3][0] == 'x' && tabuleiro3[4][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][1]=='x' && tabuleiro3[1][1]== 'x' && tabuleiro3[2][1] == 'x' && tabuleiro3[3][1] == 'x' && tabuleiro3[4][1] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][2]=='x' && tabuleiro3[1][2]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[3][2] == 'x' && tabuleiro3[4][2] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][3]=='x' && tabuleiro3[1][3]== 'x' && tabuleiro3[2][3] == 'x' && tabuleiro3[3][3] == 'x' && tabuleiro3[4][3] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][4]=='x' && tabuleiro3[1][4]== 'x' && tabuleiro3[2][4] == 'x' && tabuleiro3[3][4] == 'x' && tabuleiro3[4][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
      
    }else if(tabuleiro3[0][0]=='x' && tabuleiro3[1][1]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[3][3] == 'x' && tabuleiro3[4][4] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }else if(tabuleiro3[0][4]=='x' && tabuleiro3[1][3]== 'x' && tabuleiro3[2][2] == 'x' && tabuleiro3[3][1] == 'x' && tabuleiro3[4][0] == 'x'){
      fim_de_jogo = 1;
    printf("X ganhou\n");
    }
     
    if(tabuleiro3[0][0]=='o' && tabuleiro3[0][1]== 'o' && tabuleiro3[0][2] == 'o' && tabuleiro3[0][3] == 'o' && tabuleiro3[0][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[1][0]=='o' && tabuleiro3[1][1]== 'o' && tabuleiro3[1][2] == 'o' && tabuleiro3[1][3] == 'o' && tabuleiro3[1][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[2][0]=='o' && tabuleiro3[2][1]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[2][3] == 'o' && tabuleiro3[2][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[3][0]=='o' && tabuleiro3[3][1]== 'o' && tabuleiro3[3][2] == 'o' && tabuleiro3[3][3] == 'o' && tabuleiro3[3][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[4][0]=='o' && tabuleiro3[4][1]== 'o' && tabuleiro3[4][2] == 'o' && tabuleiro3[4][3] == 'o' && tabuleiro3[4][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro3[0][0]=='o' && tabuleiro3[1][0]== 'o' && tabuleiro3[2][0] == 'o' && tabuleiro3[3][0] == 'o' && tabuleiro3[4][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][1]=='o' && tabuleiro3[1][1]== 'o' && tabuleiro3[2][1] == 'o' && tabuleiro3[3][1] == 'o' && tabuleiro3[4][1] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][2]=='o' && tabuleiro3[1][2]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[3][2] == 'o' && tabuleiro3[4][2] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][3]=='o' && tabuleiro3[1][3]== 'o' && tabuleiro3[2][3] == 'o' && tabuleiro3[3][3] == 'o' && tabuleiro3[4][3] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][4]=='o' && tabuleiro3[1][4]== 'o' && tabuleiro3[2][4] == 'o' && tabuleiro3[3][4] == 'o' && tabuleiro3[4][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
      
    }else if(tabuleiro3[0][0]=='o' && tabuleiro3[1][1]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[3][3] == 'o' && tabuleiro3[4][4] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }else if(tabuleiro3[0][4]=='o' && tabuleiro3[1][3]== 'o' && tabuleiro3[2][2] == 'o' && tabuleiro3[3][1] == 'o' && tabuleiro3[4][0] == 'o'){
      fim_de_jogo = 1;
    printf("O ganhou\n");
    }

    int todos_preenchidos = 1;
    
      for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
          if(tabuleiro3[i][j] == ' ')
            todos_preenchidos = 0;
        }
      }
      if(todos_preenchidos == 1 && fim_de_jogo == 0){
        printf("\ndeu velha\n");
        fim_de_jogo = 1;
      }
              
    if(fim_de_jogo == 1) {
      int jogar_novamente = 0;
      printf("\nDeseja jogar novamente?\n");
      printf("[1] - sim\n");
      printf("[2] - nao\n>");
      scanf("%d", &jogar_novamente);
      if(jogar_novamente == 1) {
        fim_de_jogo = 0;

        // limpar tabuleiro
        for(int k = 0; k<5; k++) {
          for(int l = 0; l<5; l++) {
            tabuleiro3[k][l] = ' ';
          }
        }
        break;
      }
    }              
        
  } while(fim_de_jogo == 0);
    break;
    
    default:
      system("clear");
      puts(color_red"\nOpção inválida!"color_reset);
      fim_de_jogo = 0;
    break;
    
  }
}while(fim_de_jogo == 0);
  
  return 0;
}