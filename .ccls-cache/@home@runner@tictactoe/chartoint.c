#include <stdio.h>
#include <stdlib.h>

int main(){
  
  char jogadas_char;
  int jogadas_int;
  int jogarnovamente = 0;

  system("clear");
  
  do{
      printf("\n");
      printf("entre com a jogada\n>");
      scanf("%s", &jogadas_char);
        if(jogadas_char >= '1' && jogadas_char <= '10'){
          jogadas_int = jogadas_char - '0';
          printf("%d", jogadas_int);
          jogarnovamente = 1;
        }
        else{
          system("clear");
          puts("\nerror");
          jogarnovamente = 0;
        }

    }while(jogarnovamente == 0);
  





  return 0;
}