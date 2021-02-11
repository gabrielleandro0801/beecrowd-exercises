#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int num[vezes];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &num[i]);
  }

  for(i = 0; i < vezes; i++){
    if(num[i] > 0 && num[i]%2 == 0){
      printf("EVEN POSITIVE\n");
    }else if(num[i] > 0 && num[i] != 0){
      printf("ODD POSITIVE\n");
    }else if(num[i] < 0 && num[i]%2 == 0){
      printf("EVEN NEGATIVE\n");
    }else if(num[i] < 0 && num[i] != 0){
      printf("ODD NEGATIVE\n");
    }else{
      printf("NULL\n");
    }
  }

  return 0;
}