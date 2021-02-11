#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int num = 1;
  int i;
  for(i = 0; i < vezes; i++, num = num + 4){
    printf("%d %d %d PUM\n", num, num+1, num+2);
  }
  
  
  return 0;
}