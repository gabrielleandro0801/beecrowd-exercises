#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  char nome[100];
  int forca;

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%s", nome);
    scanf("%d", &forca);

    if(nome[0] == 'T' && nome[1] == 'h' && nome[2] == 'o' && nome[3] == 'r'){
      printf("Y\n");
    }else{
      printf("N\n");
    }

  }

  return 0;
}