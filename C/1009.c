#include <stdio.h>
 
int main() {
 
  char nome;
  double salFixo;
  double totVendas;
  double salario;

  scanf("%s", &nome);
  scanf("%lf", &salFixo);
  scanf("%lf", &totVendas);
  
  salario = salFixo + (totVendas * 0.15);

  printf("TOTAL = R$ %.2lf\n", salario);
 
    return 0;
}