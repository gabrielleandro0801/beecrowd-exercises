#include <stdio.h>

int fat(int a){
  if(a == 0 || a == 1){
    return 1;
  }else{
    return fat(a-1)*a;
  }
}
int main(void) {
  int num;
  scanf("%d", &num);
  
  printf("%d\n", fat(num));
  return 0;
}