#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  int contador;
  for(contador = 1; contador <= num; contador++){
    int quad;
    int cubo;
    quad = contador * contador;
    cubo = quad * contador;
    printf("%d %d %d\n", contador, quad, cubo);
  }

  return 0;
}