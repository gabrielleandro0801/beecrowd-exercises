#include <stdio.h>
#include <string.h> 
#include <stdlib.h>
#include <math.h>

int main(void) {
  unsigned long long int pato;
  unsigned long long int retorno;

  while(scanf("%llu", &pato)){
    if(pato == -1){
      break;
    }else if(pato == 0){
      printf("0\n");
    }else{
      retorno = pato - 1;
      printf("%llu\n", retorno);
    }  
    
  }
  

  return 0;
}