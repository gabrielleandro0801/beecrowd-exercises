#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int num[vezes];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &num[i]);
  }

  int menorValor = num[0];
  int posi = 0;

  for(i = 0; i < vezes; i++){
    if(menorValor > num[i]){
      menorValor = num[i];
      posi = i;
    }
  }

  printf("Menor valor: %d\n", menorValor);
  printf("Posicao: %d\n", posi);

  return 0;
}