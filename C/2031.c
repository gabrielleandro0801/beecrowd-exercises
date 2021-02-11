#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int i;
  for(i = 0; i < vezes; i++){
    char joga1[10];
    char joga2[10];
    scanf("%s", joga1);
    scanf("%s", joga2);

    if(joga1[1] == 'e' && joga1[1] == joga2[1]){
      printf("Sem ganhador\n");
    }else if(joga1[1] == 'a' && joga1[1] == joga2[1]){
      printf("Ambos venceram\n");
    }else if(joga1[1] == 't' && joga1[1] == joga2[1]){
      printf("Aniquilacao mutua\n");
    }else if(joga1[1] == 't' && joga2[1] == 'e'){
      printf("Jogador 1 venceu\n");
    }else if(joga1[1] == 'e' && joga2[1] == 'a'){
      printf("Jogador 1 venceu\n");
    }else if(joga1[1] == 't' && joga2[1] == 'a'){
      printf("Jogador 1 venceu\n");
    }else if(joga1[1] == 'e' && joga2[1] == 't'){
      printf("Jogador 2 venceu\n");
    }else if(joga1[1] == 'a' && joga2[1] == 'e'){
      printf("Jogador 2 venceu\n");
    }else if(joga1[1] == 'a' && joga2[1] == 't'){
      printf("Jogador 2 venceu\n");
    }
  }

  return 0;
}