#include <stdio.h>

int main(void) {
  int A, B;
  scanf("%d", &A);
  scanf("%d", &B);

  if(A%B==0 || B%A==0){
    printf("Sao Multiplos\n");
  }else{
    printf("Nao sao Multiplos\n");
  }

  return 0;
}