#include <stdio.h>

int main(void) {
  char nome[10][31];
  
  int i;
  for(i = 0; i < 10; i++){
    scanf("%s", nome[i]);
  }

  printf("%s\n", nome[2]);
  printf("%s\n", nome[6]);
  printf("%s\n", nome[8]);
  return 0;
}