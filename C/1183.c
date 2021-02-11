#include <stdio.h>
#include <stdlib.h>

int main(){
  double soma = 0.0, M[12][12];
  char T[2];
  int linha, coluna, linha2, coluna2;
  scanf("%s", T);
  int p = 1;

  for(linha = 0; linha <= 11; linha++){ //PREENCHENDO A MATRIZ
    for(coluna = 0; coluna <= 11; coluna++)
      scanf("%lf", &M[linha][coluna]);
  } 

  for(linha2 = 0; linha2 <= 10; linha2++){
    for(coluna2 = p; coluna2 <= 11; coluna2++){
      soma = soma + M[linha2][coluna2];
    }
    p++;
  }

  if(T[0]=='S'){
    printf("%.1lf\n", soma);
  }else if(T[0]=='M'){
    soma = soma/66.0;
    printf("%.1lf\n", soma);
  } //SOMA OU MÉDIA

    return 0;
}
