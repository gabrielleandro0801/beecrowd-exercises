#include <stdio.h>

int main(void) {
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);

  int difeAB = B - A;
  int difeBC = C - B;

  if(difeAB < 0){
    difeAB *= -1; 
  }

  if(difeBC < 0){
    difeBC *= -1; 
  }

  if(A > B){
    if(B <= C){ // 1 caso
      printf(":)\n");
    }else if(B > C && difeBC < difeAB){ // 5 caso
      printf(":)\n");
    }else{ // 6 caso
      printf(":(\n");
    }
  }else if(B > A){
    if(B >= C){ // 2 caso
      printf(":(\n");
    }else if(B < C && difeBC < difeAB){ // 3 caso
      printf(":(\n");
    }else{ // 4 caso
      printf(":)\n");
    }
  }else{
    if(B < C){ // 7 caso
      printf(":)\n");
    }else{ // 7 caso
      printf(":(\n");
    }
  }

  return 0;
}