#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1157 URI
  int numero;
  int divisor;
  int resultado;

  scanf("%d", &numero);

  for(divisor = 1; divisor <=numero; divisor++){
    resultado = numero%divisor;
    if(resultado == 0){
      printf("%d\n", divisor);
    }
  }

    return 0;
}
