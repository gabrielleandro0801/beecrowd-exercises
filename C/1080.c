#include <stdio.h>

int main(void) {
  int num[100];
  int posi = 1;

  int i;
  for(i = 0; i < 100; i++){
    scanf("%d", &num[i]);
  }

  int maior;
  maior = num[0];

  for(i = 0; i < 100; i++){
    if(num[i] > maior){
      maior = num[i];
      posi = i + 1; 
    }
  }

  printf("%d\n", maior);
  printf("%d\n", posi);


  return 0;
}