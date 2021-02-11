#include <stdio.h>

int main(void) {
  int tempo;
  scanf("%d", &tempo);

  int horas = 0;
  int minutos;
  int segundos;

  minutos = tempo/60;
  segundos = tempo%60;

  if(minutos > 60){
    horas = minutos/60;
    minutos = minutos%60;
  }

  printf("%d:%d:%d\n", horas, minutos, segundos);

  return 0;
}