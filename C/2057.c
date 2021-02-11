#include <stdio.h>

int main(void) {
  int saida;
  int tempo;
  int fuso;

  scanf("%d %d %d", &saida, &tempo, &fuso);

  int hora;
  hora = saida + tempo + fuso;

  if(hora < 0){
    hora = hora + 24;
  }

  if(hora >= 24){
    hora = hora - 24;
  }

  printf("%d\n", hora);

  return 0;
}