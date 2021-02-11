#include <stdio.h>

int main(void) {
  double salario;
  scanf("%lf", &salario);

  double imposto;

  if(salario > 4500.01){
    imposto = (((salario - 4500)*0.28) + (1500*0.18) + (1000*0.08));
    printf("R$ %.2lf\n", imposto);
  }else if(salario >= 3000.01){
    imposto = (((salario - 3000)*0.18) + (1000*0.08));
    printf("R$ %.2lf\n", imposto);
  }else if(salario >= 2000.01){
    imposto = ((salario - 2000)* 0.08);
    printf("R$ %.2lf\n", imposto);
  }else{
    printf("Isento\n");
  }


  return 0;
}