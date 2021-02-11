#include <stdio.h>

int main(void) {
  int A, B, C = 0;
  
  while(1){
    scanf("%d", &A);
    scanf("%d", &B);
    
    if(A == 0 && B == 0){
      break;
    }else{
      C = A*B;
      printf("%d\n", C);
    }

  }
  return 0;
}