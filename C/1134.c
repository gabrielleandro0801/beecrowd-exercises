#include <stdio.h>

int main(void) {
  int gasolina = 0;
  int alcool = 0;
  int diesel = 0;

  int num;
  do{
    scanf("%d", &num);
    if(num == 1){
      alcool++;
    }else if(num == 2){
      gasolina++;
    }else if(num == 3){
      diesel++;
    }
  }while(num != 4);

  printf("MUITO OBRIGADO\n");
  printf("Alcool: %d\n", alcool);
  printf("Gasolina: %d\n", gasolina);
  printf("Diesel: %d\n", diesel);
  
  return 0;
}