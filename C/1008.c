#include <stdio.h>
 
int main() {
 
  int numero;
  int horasTrab;
  double valorHora;
  double salario;

  scanf("%d", &numero);
  scanf("%d", &horasTrab);
  scanf("%lf", &valorHora);
  
  salario = (valorHora * horasTrab);

  printf("NUMBER = %d\n", numero);
  printf("SALARY = U$ %.2lf\n", salario);
 
    return 0;
}