#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int i;
  for(i = 0; i < vezes; i++){
    char curso[i][100];
    scanf("%s", curso[i]);
  }
  printf("Ciencia da Computacao\n");
  return 0;
}