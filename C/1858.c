#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int vetor[vezes];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &vetor[i]);
  }

  int menor = vetor[0];
  int posiMenor = 1;

  for(i = 0; i < vezes; i++){
    if(vetor[i] < menor){
      menor = vetor[i];
      posiMenor = i+1;
    }
  }

  printf("%d\n", posiMenor);

  return 0;
}