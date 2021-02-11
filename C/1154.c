#include <stdio.h>
#include <stdlib.h>

int main()
{
  int idade;
  int idadeSoma = 0;
  int num = 0;
  float media;

  do{
    scanf("%d", &idade);
    if(idade > 0){
      idadeSoma += idade;
      num++;
    }

  }while(idade > 0);

  media = (idadeSoma*1.0)/num;

  printf("%.2f\n", media);
  
    return 0;
}