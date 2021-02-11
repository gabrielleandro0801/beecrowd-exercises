#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int num[vezes];
  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &num[i]);
  }

  int mult2 = 0, mult3 = 0, mult4 = 0, mult5 = 0;

  for(i = 0; i < vezes; i++){
    if(num[i]%2 == 0){
      mult2++;
    }
    if(num[i]%3 == 0){
      mult3++;
    }
    if(num[i]%4 == 0){
      mult4++;
    }
    if(num[i]%5 == 0){
      mult5++;
    }
  }

  printf("%d Multiplo(s) de 2\n", mult2);
  printf("%d Multiplo(s) de 3\n", mult3);
  printf("%d Multiplo(s) de 4\n", mult4);
  printf("%d Multiplo(s) de 5\n", mult5);
  
  return 0;
}