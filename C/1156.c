#include <stdio.h>

int main(void) {
  int num;

  double S = 0;
  double A, B = 1;

  double i;
  for(i = 1; i <= 39; i = i + 2){
    A = i;
    S = S + A/B;
    B = B*2;
  }
  
  printf("%.2lf\n", S);

  return 0;
}