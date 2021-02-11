#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1133 URI
  int num1;
  int num2;
  int contador;
  scanf("%d", &num1);
  scanf("%d", &num2);

  if(num1<num2){
    for(contador = num1+1; contador < num2; contador++){
      if(contador%5 == 2 || contador%5 == 3){
        printf("%d\n", contador);
      }
    }
  }else{
    for(contador = num2+1; contador < num1; contador++){
      if(contador%5 == 2 || contador%5 == 3){
        printf("%d\n", contador);
      }
    }
  }
    return 0;
}
