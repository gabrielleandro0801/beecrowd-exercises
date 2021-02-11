#include <stdio.h>

int main(void) {
  char nome[50] = {"AMO FAZER EXERCICIO NO URI"};
  printf("<%s>\n", nome);
  printf("<%30s>\n", nome);
  printf("<%.20s>\n", nome);
  printf("<%-20s>\n", nome);
  printf("<%-30s>\n", nome);
  printf("<%.30s>\n", nome);
  printf("<%30.20s>\n", nome);
  printf("<%-30.20s>\n", nome);
  return 0;
}