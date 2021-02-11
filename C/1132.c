#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1132 URI
  int num1;
  int num2;
  int soma = 0;
  int contador;
  scanf("%d", &num1);
  scanf("%d", &num2);

  if(num1>num2){
    for(contador = num2; contador <=num1; contador++){
      if(contador%13 != 0){
        soma = soma + contador;
      }
    }
  }else{
    for(contador = num1; contador <=num2; contador++){
      if(contador%13 != 0){
        soma = soma + contador;
      }
    }
  }

  printf("%d\n", soma);
    return 0;
}
