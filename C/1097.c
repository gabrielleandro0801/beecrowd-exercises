#include <stdio.h>

int main(void) {
  int i = 0, j;
  int k, l;
  k = 7;
  l = 5;

  for(i = 1; i <= 9; i = i+2){
    for(j = k; j >= l; j--){
      printf("I=%d J=%d\n",i, j);
    }
    k = k + 2;
    l = l + 2;
  }

  return 0;
}