#include <stdio.h>

int main(void) {
  int diasV;
  scanf("%d", &diasV);

  int ano; 
  int mes; 
  int dia;

  int restoAno;
  int restoMes;

  ano = diasV/365;
  restoAno = diasV%365;

  mes = restoAno/30;
  restoMes = restoAno%30;

  printf("%d ano(s)\n", ano);
  printf("%d mes(es)\n", mes);
  printf("%d dia(s)\n", restoMes);
  return 0;
}