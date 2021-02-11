#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1155 URI
  double S = 0;
  int contador;
  double soma = 0;

  for(contador = 1; contador <=100; contador++){
    soma = 1.0/contador;
    S = S+soma;
  }
  printf("%.2lf\n", S);
    return 0;
}
