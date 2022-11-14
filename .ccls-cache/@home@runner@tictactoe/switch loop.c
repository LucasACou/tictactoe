#include <stdio.h>
#include <stdlib.h>

int main(){
  
  int menu;
  char jogar_denovo;
do{
  system("clear");
  printf("[1] ganhou\n");
  printf("[2] perdeu\n>");
  scanf("%d", &menu);

  switch(menu){
    
  case 1:
    printf("ganhou\n");
      printf("quer jogar de novo\n");
        printf("[y] - sim ou [n] - nao\n>");
          scanf("%s", &jogar_denovo);
        
      if(jogar_denovo == 'n'){
        exit(0);
        }
        break;
  case 2:
    printf("perdeu\n");
      printf("quer jogar de novo\n");
        printf("[y] - sim ou [n] - nao\n>");
          scanf("%s", &jogar_denovo);
        
      if(jogar_denovo == 'n'){
        exit(0);
        }

    }
}while(jogar_denovo == 'y');





  return 0;
}