#include <stdio.h>

int main(void) {
  double matriz[12][12];
  char carac[4];
  int linha;
  double soma;
  double media;
  
  scanf("%d", &linha);
  scanf("%s", carac);

  int i, j;
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      scanf("%lf", &matriz[i][j]);
    }
  }

  if(carac[0] == 'S'){
    for(i = 0; i < 12; i++){
      soma += matriz[linha][i];
    }
    printf("%.1lf\n", soma);
  }else if(carac[0] == 'M'){
    for(i = 0; i < 12; i++){
      soma += matriz[linha][i];
    }
    media = soma/12.0; 
    printf("%.1lf\n", media);
  }
 

  return 0;
}