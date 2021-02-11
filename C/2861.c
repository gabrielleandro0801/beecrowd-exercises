#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);
  char pergunta[vezes][40];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%s", pergunta[vezes]);
  }

  for(i = 0; i < vezes; i++){
    printf("gzuz\n");
  }

  return 0;
}