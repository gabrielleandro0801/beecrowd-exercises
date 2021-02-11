#include <stdio.h>

int main(void) {
  int A;
  int B;

  do{
    scanf("%d", &A);
    scanf("%d", &B);

    if(A>B){
      printf("Decrescente\n");
    }else if(B>A){
      printf("Crescente\n");
    }
  }while(A!=B);
  return 0;
}