#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int hora[vezes];
  int minuto[vezes];
  int abFecha[vezes];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &hora[i]);
    scanf("%d", &minuto[i]);
    scanf("%d", &abFecha[i]);
  }
  
  for(i = 0; i < vezes; i++){
    if(abFecha[i] == 1){
      printf("%02d:%02d - A porta abriu!\n", hora[i], minuto[i]);
    }else{
      printf("%02d:%02d - A porta fechou!\n", hora[i], minuto[i]);
    }
  }
  
  
  return 0;
}