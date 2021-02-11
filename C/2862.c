#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 2862 URI
  int vezes;
  scanf("%d", &vezes);
  int i;
  for(i = 1; i <= vezes; i++){
    int energia;
    scanf("%d", &energia);
    if(energia>8000){
      printf("Mais de 8000!\n");
    }else{
      printf("Inseto!\n");
    }
  }

    return 0;
}
