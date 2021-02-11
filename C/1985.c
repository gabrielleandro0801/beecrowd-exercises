#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int item[vezes];
  int quant[vezes];
  double resul = 0;

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &item[i]);
    scanf("%d", &quant[i]);
  }

  for(i = 0; i < vezes; i++){
    if(item[i] == 1001){
      resul += quant[i]*1.50;
    }else if(item[i] == 1002){
      resul += quant[i]*2.50;
    }else if(item[i] == 1003){
      resul += quant[i]*3.50;
    }else if(item[i] == 1004){
      resul += quant[i]*4.50;
    }else if(item[i] == 1005){
      resul += quant[i]*5.50;
    }
  }
  
  printf("%.2lf\n", resul);
  
  
  return 0;
}