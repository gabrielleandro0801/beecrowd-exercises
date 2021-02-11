#include <stdio.h>

int main(void) {
  int vezes;
  int h, d, g;
  scanf("%d", &vezes);

  int i = 0;
  while(i < vezes){
    scanf("%d %d %d", &h, &d, &g);
    if(h >= 200 && h <= 300 && d >= 50 && g >= 150){
      printf("Sim\n");
    }else{
      printf("Nao\n");
    }
    i++;
  }

  return 0;
}