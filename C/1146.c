#include <stdio.h>

int main(void) {
  int num;

  while(1){
    scanf("%d", &num);
    if(num == 0){
      break;
    }
    int i;
    for(i = 1; i < num; i++){
      printf("%d ", i);
    }
    printf("%d\n", num);
  }
  

  return 0;
}