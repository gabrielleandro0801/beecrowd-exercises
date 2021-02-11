#include <stdio.h>

int main(void) {
  char carac[2];
  double M[12][12];
  double soma = 0;
  scanf("%s", carac);

  int i, j;
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      scanf("%lf", &M[i][j]);
    }
  }

  int inicio = 1, fim = 10;
  int k;
  for(k = 0; k < 5; k++){
    for(i = inicio; i <= fim; i++){
      soma += M[k][i];
    }
    inicio++;
    fim--;
  }
  
  if(carac[0] == 'S'){
    printf("%.1lf\n", soma);
  }else if(carac[0] == 'M'){
    printf("%.1lf\n", soma/30.0);
  }
  
  return 0;
}