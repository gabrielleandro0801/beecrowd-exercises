#include <stdio.h>

int main(void) {
  double valor[6];
  int positivos = 0;
  scanf("%lf", &valor[0]);
  scanf("%lf", &valor[1]);
  scanf("%lf", &valor[2]);
  scanf("%lf", &valor[3]);
  scanf("%lf", &valor[4]);
  scanf("%lf", &valor[5]);

  int i;
  for(i = 0; i < 6; i++){
    if(valor[i] > 0){
      positivos = positivos + 1;
    }
  }

  printf("%d valores positivos\n", positivos);

  return 0;
}