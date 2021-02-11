#include <stdio.h>

int main(void) {
  int resp;
  int tent[5];

  int qtdCerta = 0;

  scanf("%d", &resp);

  int i;
  for(i = 0; i < 5; i++){
    scanf("%d", &tent[i]);
  }

  for(i = 0; i < 5; i++){
    if(tent[i] == resp){
      qtdCerta++;
    }
  }

  printf("%d\n", qtdCerta);
  
  return 0;
}