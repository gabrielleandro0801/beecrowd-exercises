#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);
  char vilao[26];
  
  int i = 0;
  while(i < vezes){
    scanf("%s", vilao);
    printf("Y\n");
    i++;
  }

  return 0;
}