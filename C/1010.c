#include <stdio.h>
 
int main() {
 
  int cod1;
  int qtdPecas1;
  double valorPeca1;

  int cod2;
  int qtdPecas2;
  double valorPeca2;
  double total;

  scanf("%d %d %lf", &cod1, &qtdPecas1, &valorPeca1);
  scanf("%d %d %lf", &cod2, &qtdPecas2, &valorPeca2);
  
  total = (qtdPecas1*valorPeca1) + (qtdPecas2*valorPeca2);

  printf("VALOR A PAGAR: R$ %.2lf\n", total);
 
    return 0;
}