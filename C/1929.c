#include <stdio.h>

int main(void) {
  int A, B, C, D;
  scanf("%d %d %d %d", &A, &B, &C, &D);

  if(A >= 1 && B >= 1 && C >= 1 && D >= 1){
    if(A < B+C && B < A+C && C < A+B){
      printf("S\n");
    }else if(A < B+D && B < A+D && D < A+B){
      printf("S\n");
    }else if(B < C+D && C < B+D && D < B+C){
      printf("S\n");
    }else if(A < C+D && C < A+D && D < A+C){
      printf("S\n");
    }else{
      printf("N\n");
    }
  }else{
    printf("N\n");
  }
  
  
  return 0;
}