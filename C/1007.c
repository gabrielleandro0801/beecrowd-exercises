#include <stdio.h>
 
int main() {
 
  int A;
  int B;
  int C;
  int D;
  int diferenca;

  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);
  scanf("%d", &D);

  diferenca = (A*B - C*D);

  printf("DIFERENCA = %d\n", diferenca);
 
    return 0;
}