#include <stdio.h>

int main(void) {
  int horas;
  int vMedia;
  scanf("%d", &horas);
  scanf("%d", &vMedia);

  int distancia;
  distancia = horas * vMedia;

  float qtdLitros;
  qtdLitros = distancia / 12.0;

  printf("%.3lf\n", qtdLitros);
  return 0;
}