#include <stdio.h>
#include <string.h>

int main(void) {
  char palavra[10000];
  double tempo;
  int vezes;
  scanf("%d", &vezes);

  int i; 
  for(i = 0; i < vezes; i++){
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    tempo = tamanho*0.01;
    printf("%.2lf\n", tempo);
  }
  
  
  return 0;
}