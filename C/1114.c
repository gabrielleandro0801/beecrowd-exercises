#include <stdio.h>

int main(void) {
  int num;

  do{
    scanf("%d", &num);
    if(num == 2002){
      printf("Acesso Permitido\n");
    }else{
      printf("Senha Invalida\n");
    }
  }while(num != 2002);
  
  
  return 0;
}