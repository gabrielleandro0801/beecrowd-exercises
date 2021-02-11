#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int dentro = 0;
  int fora = 0;

  int num[vezes];
  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &num[i]);
  }

  for(i = 0; i < vezes; i++){
    if(num[i] >= 10 && num[i] <=20){
      dentro++;
    }else{
      fora++;
    }
  }

  printf("%d in\n", dentro);
  printf("%d out\n", fora);

  return 0;
}