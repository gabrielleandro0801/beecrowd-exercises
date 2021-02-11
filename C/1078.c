#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1078 URI
  int n;
  int multi;
  int result;
  scanf("%d", &n);

  for(multi = 1; multi <= 10; multi++){
    result = n * multi;
    printf("%d x %d = %d\n", multi, n, result);
  }
    return 0;
}
