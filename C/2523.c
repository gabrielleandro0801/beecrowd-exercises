#include <stdio.h>

int main(void) {
  char frase[26];
  int qtd;
  int num;

  int i;
  while(scanf("%s", frase) != EOF){
    scanf("%d", &qtd);
    while(qtd--){
      scanf("%d", &num);
      printf("%c", frase[num - 1]);
    }
    printf("\n");
  }
  
  
  
  
  return 0;
}