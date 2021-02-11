#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int i;
  for(i = 0; i < vezes; i++){
    float A, B, C;
    scanf("%f", &A);
    scanf("%f", &B);
    scanf("%f", &C);
    float media;
    media = (A*2 + B*3 + C*5)/10;
    printf("%.1f\n", media);
  }

  return 0;
}