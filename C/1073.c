#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  int i;
  for(i = 1; i <= num; i++){
    if(i % 2 == 0){
      printf("%d^2 = %d\n", i, i*i);
    }
  }

  return 0;
}