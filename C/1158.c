#include <stdio.h>

int main(void) {

  int vezes;
  scanf("%d", &vezes);

  int i;
  for(i = 0; i < vezes; i++){
    int A, B, soma = 0;
    scanf("%d", &A);
    scanf("%d", &B);

    if(A%2 == 0){
      A = A + 1;
    }

    int j;
    for(j = 0; j < B; j++){
      soma = soma + A;
      A = A + 2; 
    }
    printf("%d\n", soma);
  }

  return 0;
}