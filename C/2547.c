#include <stdio.h>

int main(void) {
  
  int vezes;
  int min, max;
  int aptos = 0;

  while(scanf("%d", &vezes) != EOF){
    aptos = 0;
    scanf("%d %d", &min, &max);
    int visitantes[vezes];
    int i;
    for(i = 0; i < vezes; i++){
      scanf("%d", &visitantes[i]);
    }
    for(i = 0; i < vezes; i++){
      if(visitantes[i] >= min && visitantes[i] <= max){
        aptos++;
      }
    }
    printf("%d\n", aptos);
  }

  


  
  return 0;
}