#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1048 URI
  double salario;
  double novoSal;
  double diferenca;
  scanf("%lf", &salario);

  if(salario > 0 && salario <= 400){
    novoSal = salario + (salario * 0.15);
    diferenca = novoSal - salario;
    printf("Novo salario: %.2lf\n", novoSal);
    printf("Reajuste ganho: %.2lf\n", diferenca);
    printf("Em percentual: 15 %%\n");
  }else if(salario > 400 && salario <= 800){
    novoSal = salario + (salario * 0.12);
    diferenca = novoSal - salario;
    printf("Novo salario: %.2lf\n", novoSal);
    printf("Reajuste ganho: %.2lf\n", diferenca);
    printf("Em percentual: 12 %%\n");
  }else if(salario > 800 && salario <= 1200){
    novoSal = salario + (salario * 0.10);
    diferenca = novoSal - salario;
    printf("Novo salario: %.2lf\n", novoSal);
    printf("Reajuste ganho: %.2lf\n", diferenca);
    printf("Em percentual: 10 %%\n");
  }else if(salario > 1200 && salario <=2000){
    novoSal = salario + (salario * 0.07);
    diferenca = novoSal - salario;
    printf("Novo salario: %.2lf\n", novoSal);
    printf("Reajuste ganho: %.2lf\n", diferenca);
    printf("Em percentual: 7 %%\n");
  }else{
    novoSal = salario + (salario * 0.04);
    diferenca = novoSal - salario;
    printf("Novo salario: %.2lf\n", novoSal);
    printf("Reajuste ganho: %.2lf\n", diferenca);
    printf("Em percentual: 4 %%\n");
  }

    return 0;
}
