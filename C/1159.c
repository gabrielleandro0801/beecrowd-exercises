#include <stdio.h>

int main(void) {
  int num;
  int soma = 0;

  while(1){
    scanf("%d", &num);
    if(num == 0){
      break;
    }
    soma = 0;
    if(num%2 != 0){
      num++;
    }
    int i;
    for(i = num; i <= num+8; i++){
      if(i%2 == 0){
      soma +=  i;
      }
    }
    printf("%d\n", soma);
  }


  return 0;
}