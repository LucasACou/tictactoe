#include <stdio.h>
#include <stdlib.h>
#define color_red "\e[0;31m"
#define color_purple "\e[0;35m"
#define color_cyan "\e[0;36m"
#define color_reset "\e[0m"

int main()
{
  int menu_principal;
  
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
  printf("[1] - Easy\n");
  printf("[2] - Normal\n");
  printf("[3] - Hard\n");
  

  switch(menu_dificuldade)
  

   
  




















  

 return 0;
}