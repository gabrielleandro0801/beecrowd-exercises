#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int num[vezes];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &num[i]);
  }

  int divisores[vezes];
  for(i = 0; i < vezes; i++){
    divisores[i] = 0;
  }

  int j;
  for(i = 0; i < vezes; i++){
    for(j = 1; j <= num[i]; j++){
      if(num[i]%j == 0){
        divisores[i] += 1; 
      }
    }
  }

  for(i = 0; i < vezes; i++){
    if(divisores[i] > 2){
      printf("%d nao eh primo\n", num[i]);
    }else{
      printf("%d eh primo\n", num[i]);
    }
  }



  return 0;
}