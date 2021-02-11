#include <stdio.h>

int main(void) {
  int A, B, C, D;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);

  int somaCD, somaAB;
  somaAB = A+B;
  somaCD = C+D;

  if(B>C && D>A && somaCD>somaAB && C>0 && D>0 && A%2==0){
    printf("Valores aceitos\n");
  }else{
    printf("Valores nao aceitos\n");
  }
  
  return 0;
}