#include <stdio.h>


int main(void) {
  int vezes;

  while(scanf("%d", &vezes) != EOF){
    int vetor[vezes];
    
    int i;
    for(i = 0; i < vezes; i++){
      scanf("%d", &vetor[i]);
    }

    int maior = vetor[0];
    for(i = 0; i < vezes; i++){
      if(maior < vetor[i]){
        maior = vetor[i];
      }
    }

    if(maior < 10){
      printf("1\n");
    }else if(maior > 10 && maior < 20){
      printf("2\n");
    }else{
      printf("3\n");
    }
  }
 
  


  return 0;
}