#include <stdio.h>

int main(void) {

  int T;
  scanf("%d", &T);

  int N[1000];
  int caixa = 0;

  int i;
  for(i = 0; i < 1000; i++){
    if(caixa < T){
      N[i] = caixa;
      printf("N[%d] = %d\n", i, N[i]);
    }else{
      caixa = 0;
      N[i] = caixa;
      printf("N[%d] = %d\n", i, N[i]);
    }
    caixa++;
  }
  
  return 0;
}