#include <stdio.h>

int main(void) {
  int X, Y;
  scanf("%d", &X);
  scanf("%d", &Y);

  int maior = X;
  int menor = Y;
  if(Y > maior){
    maior = Y;
    menor = X;
  }

  int soma = 0;
  int i;
  for(i = menor+1; i < maior; i++){
    if(i%2 != 0){
      soma += i;
    }
  }

  printf("%d\n", soma);
  return 0;
}