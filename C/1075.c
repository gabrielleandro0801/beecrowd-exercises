#include <stdio.h>

int main(void) {
  int num;
  scanf("%d", &num);

  int contador;
  for(contador = 0; contador < 10000; contador++){
    if(contador % num == 2){
      printf("%d\n", contador);
    }
  }
  
  return 0;
}