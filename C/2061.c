#include <stdio.h>

int main(){
	int inicial = 0, acoes;
  scanf("%d %d", &inicial, &acoes);

  int fim = inicial;

  int i;
  for(i = 0; i < acoes; i++){
    char acao[10];
    scanf("%s", acao);
    if(acao[0] == 'f'){
      fim = fim + 1;
    }else{
      fim = fim - 1;
    }
  }

  printf("%d\n", fim);

	return 0;
}