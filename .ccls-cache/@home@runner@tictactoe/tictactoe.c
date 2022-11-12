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

  int menu_principal = 0;

  do {
    printf("\n");
    printf("[1] - Jogar\n");
    printf("[2] - Creditos\n");
    scanf("%d", &menu_principal);

    if(menu_principal == 2){
      system ("clear");
      printf("####################################\n");
      printf("|                                  |\n");
      printf("|          TICTACTOE IN C          |\n");
      printf("|                                  |\n");
      printf("|                By                |\n");
      printf("|                                  |\n");
      printf("|         -Lucas Assunção          |\n");
      printf("|         -Lucas Calabresi         |\n");
      printf("|                                  |\n");
      printf("####################################\n");
    }
    else {
      puts(color_red"\nERRO!"color_reset);
    }
  
  } while (menu_principal != 1);

  
  int menu_dificuldade;
  
  system ("clear");
  printf("\n");
  printf("[1] - 3x3\n");
  printf("[2] - 4x4\n");
  printf("[3] - 5x5\n");
  scanf("%d", &menu_dificuldade);

  switch(menu_dificuldade){
    case 1:
      do {
    system("clear");

    //tabuleiro
    
    printf("\n");
    printf(" ▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
    printf(" █ %c █ %c █ %c █\n", tabuleiro[0][0], tabuleiro[0][1], tabuleiro[0][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█\n");
    printf(" █ %c █ %c █ %c █\n", tabuleiro[1][0], tabuleiro[1][1], tabuleiro[1][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█\n");
    printf(" █ %c █ %c █ %c █\n", tabuleiro[2][0], tabuleiro[2][1], tabuleiro[2][2]);
    printf(" █▄▄▄█▄▄▄█▄▄▄█\n");

    printf("\nEscolha as casas pra jogar:");
    
    do {
      int casa_jogada;
      scanf("%d", &casa_jogada);
        casa_jogada = casa_jogada - 1;
        linha = casa_jogada/3;
        coluna = casa_jogada%3;
      
      if(tabuleiro[linha][coluna] == 'x' || tabuleiro[linha][coluna] == 'o') {
        printf("\nCasa ja ocupada, escolha outra casa:");
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
        
  } while(fim_de_jogo == 0);
    break;

    
    case 2:
      system("clear");
      printf("    0   1   2   3  \n");
      printf("  ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("0 █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("1 █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("2 █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("3 █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
    break;

    
    case 3:
      system("clear");
      printf("    0   1   2   3   4  \n");
      printf("  ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄\n");
      printf("0 █ x █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("1 █ x █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("2 █ x █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("3 █ x █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
      printf("4 █ x █ x █ x █ x █ x █\n");
      printf("  █▄▄▄█▄▄▄█▄▄▄█▄▄▄█▄▄▄█\n");
    break;
    default:
      printf("opção inválida");
    break;
    
  }

  
  return 0;
}