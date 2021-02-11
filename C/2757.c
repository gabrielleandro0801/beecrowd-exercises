#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 2757 URI
  int A;
  int B;
  int C;
  scanf("%d", &A);
  scanf("%d", &B);
  scanf("%d", &C);

  printf("A = %d, B = %d, C = %d\n", A, B, C);
  printf("A = %10d, B = %10d, C = %10d\n", A, B, C);
  printf("A = %010d, B = %010d, C = %010d\n", A, B, C);
  printf("A = %-10d, B = %-10d, C = %-10d\n", A, B, C);
    return 0;
}
