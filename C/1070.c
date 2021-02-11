#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  if(num%2==0){
    num = num + 1;
  }
  
  printf("%d\n", num);
  printf("%d\n", num+2);
  printf("%d\n", num+4);
  printf("%d\n", num+6);
  printf("%d\n", num+8);
  printf("%d\n", num+10);
  
  return 0;
}