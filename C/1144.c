#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  int i;
  for(i = 1; i <= num; i++){
    printf("%d %d %d\n", i, i*i, i*i*i);
    printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);
  }

  return 0;
}