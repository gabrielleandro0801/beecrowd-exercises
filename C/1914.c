#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  char jogador1[vezes][100];
  char jogador2[vezes][100];

  char jogada1[vezes][5];
  char jogada2[vezes][5];

  int num1[vezes];
  int num2[vezes];
  int soma = 0;

  int i;
  for(i = 0; i < vezes; i++){
    soma = 0;
    scanf("%s", jogador1[i]);
    scanf("%s", jogada1[i]);
    scanf("%s", jogador2[i]);
    scanf("%s", jogada2[i]);
    scanf("%d", &num1[i]);
    scanf("%d", &num2[i]);
    soma = num1[i] + num2[i];
    if(soma%2 == 0){
      if(jogada1[i][0] == 'P'){
        printf("%s\n", jogador1[i]);
      }else{
        printf("%s\n", jogador2[i]);
      }
    }else{
      if(jogada1[i][0] == 'I'){
        printf("%s\n", jogador1[i]);
      }else{
        printf("%s\n", jogador2[i]);
      }
    }
  }
    
  
  
  return 0;
}