#include <stdio.h>

int main(void) {
  int A[5];
  scanf("%d", &A[0]);
  scanf("%d", &A[1]);
  scanf("%d", &A[2]);
  scanf("%d", &A[3]);
  scanf("%d", &A[4]);
  int negat = 0, pares = 0, impares = 0, posi = 0;

  int i;
  for(i = 0; i < 5; i++){
    if(A[i]%2==0){
      pares = pares +1;
    }else{
      impares = impares + 1;
    }

    if(A[i]>0){
      posi = posi+1;
    }else if(A[i]<0){
      negat = negat +1;
    }
  }


  printf("%d valor(es) par(es)\n", pares);
  printf("%d valor(es) impar(es)\n", impares);
  printf("%d valor(es) positivo(s)\n", posi);
  printf("%d valor(es) negativo(s)\n", negat);
  return 0;
}