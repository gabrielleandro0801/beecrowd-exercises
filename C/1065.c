#include <stdio.h>

int main(void) {
  int num1;
  int num2;
  int num3;
  int num4;
  int num5;
  int qtdPar = 0;

  scanf("%d", &num1);
  scanf("%d", &num2);
  scanf("%d", &num3);
  scanf("%d", &num4);
  scanf("%d", &num5);

  if(num1 % 2 == 0){
    qtdPar++;
  }
  if(num2 % 2 == 0){
    qtdPar++;
  }
  if(num3 % 2 == 0){
    qtdPar++;
  }
  if(num4 % 2 == 0){
    qtdPar++;
  }
  if(num5 % 2 == 0){
    qtdPar++;
  }

  printf("%d valores pares\n", qtdPar);
  return 0;
}