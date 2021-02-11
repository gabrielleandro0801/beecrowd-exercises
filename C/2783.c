#include <stdio.h>

int main(void) {
  int figuTotal;
  int totalCarimbadas;
  int totalCompradas;
  scanf("%d", &figuTotal);
  scanf("%d", &totalCarimbadas);
  scanf("%d", &totalCompradas);

  int quaisCompradas[totalCompradas];
  int quaisCarimbadas[totalCarimbadas];
  int espelhoCarimbadas[totalCarimbadas];

  int restantes = totalCarimbadas;

  int i;
  for(i = 0; i < totalCarimbadas; i++){
    scanf("%d", &quaisCarimbadas[i]);
    espelhoCarimbadas[i] = 1;
  }

  for(i = 0; i < totalCompradas; i++){
    scanf("%d", &quaisCompradas[i]);
  }


  int j;
  
  for(i = 0; i < totalCarimbadas; i++){
    for(j = 0; j < totalCompradas; j++){
      if(quaisCarimbadas[i] == quaisCompradas[j] && espelhoCarimbadas[i] < 2){
        if(restantes > 0){
          espelhoCarimbadas[i] += 1;
          restantes = restantes - 1;
        }
      }
    }
  }

  
  printf("%d\n", restantes);

  return 0;
}