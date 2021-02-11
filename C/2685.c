#include <stdio.h>
 
int main() {
 
  int num;
  while(scanf("%d", &num) != EOF){
    if((num >= 0 && num < 90) || num == 360){
      printf("Bom Dia!!\n");
    }else if(num >= 90 && num < 180){
      printf("Boa Tarde!!\n");
    }else if(num >= 180 &&num <270){
      printf("Boa Noite!!\n");
    }else if(num >= 270 && num < 360){
      printf("De Madrugada!!\n");
    }
  }
 
    return 0;
}