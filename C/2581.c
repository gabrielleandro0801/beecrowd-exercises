#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int i;
  for(i = 0; i < vezes; i++){
    char pergunta[100];
    scanf("%s", pergunta);
    printf("I am Toorg!\n");
  }

  return 0;
}