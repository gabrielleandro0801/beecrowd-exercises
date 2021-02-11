#include <stdio.h>

int main(void) {
  int Linha;
  int Coluna;
  scanf("%d", &Linha);
  scanf("%d", &Coluna);

  if(Linha%2 == 0 && Coluna%2 == 0){
    printf("1\n");
  }else if(Linha%2 == 1 && Coluna%2 == 0){
    printf("0\n");
  }else if(Linha%2 == 0 && Coluna%2 == 1){
    printf("0\n");
  }else if(Linha%2 == 1 && Coluna%2 == 1){
    printf("1\n");
  }

  return 0;
}