#include <stdio.h>

int main(void) {

  int X;
  int Y;

  while(1){
    scanf("%d", &X);
    scanf("%d", &Y);
    if(X == 0 || Y == 0){
      break;
    }else if(X > 0 && Y > 0){
      printf("primeiro\n");
    }else if(X < 0 && Y > 0){
      printf("segundo\n");
    }else if(X < 0 && Y < 0){
      printf("terceiro\n");
    }else if(X > 0 && Y < 0){
      printf("quarto\n");
    }
  }

  return 0;
}