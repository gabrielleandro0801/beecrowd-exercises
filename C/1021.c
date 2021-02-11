#include <stdio.h>
#include <math.h>

int main(void) {
  double valor;
  scanf("%lf", &valor);

  int nota100;
  int nota50;
  int nota20;
  int nota10;
  int nota5;
  int nota2;

  nota100 = valor/100;
  nota50 = (valor-(nota100*100)) / 50;
  nota20 = (valor-(nota100*100 + nota50*50)) / 20;
  nota10 = (valor-(nota100*100 + nota50*50 + nota20*20)) / 10;
  nota5 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10)) / 5;
  nota2 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5)) / 2;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", nota100);
  printf("%d nota(s) de R$ 50.00\n", nota50);
  printf("%d nota(s) de R$ 20.00\n", nota20);
  printf("%d nota(s) de R$ 10.00\n", nota10);
  printf("%d nota(s) de R$ 5.00\n", nota5);
  printf("%d nota(s) de R$ 2.00\n", nota2);
 
  int moeda1 = 0;
  int moeda050 = 0;
  int moeda025 = 0;
  int moeda010 = 0;
  int moeda005 = 0;
  double moeda001 = 0;

  moeda1 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2)) / 1;

  //if(valor >= 0.50){
    moeda050 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2 + moeda1*1)) / 0.50;
  //}

  //if(valor >= 0.25){
    moeda025 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2 + moeda1*1 + moeda050*0.50)) / 0.25;
  //}

  //if(valor >= 0.10){
    moeda010 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2 + moeda1*1 + moeda050*0.50 + moeda025*0.25)) / 0.10;
  //}

  //if(valor >= 0.05){
    moeda005 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2 + moeda1*1 + moeda050*0.50 + moeda025*0.25 + moeda010*0.10)) / 0.05;
  //}

  //if(valor >= 0.01){
    moeda001 = (valor-(nota100*100 + nota50*50 + nota20*20 + nota10*10 + nota5*5 + nota2*2 + moeda1*1 + moeda050*0.50 + moeda025*0.25 + moeda010*0.10 + moeda005*0.05)) / 0.01;
  //}

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", moeda1);
  printf("%d moeda(s) de R$ 0.50\n", moeda050);
  printf("%d moeda(s) de R$ 0.25\n", moeda025);
  printf("%d moeda(s) de R$ 0.10\n", moeda010);
  printf("%d moeda(s) de R$ 0.05\n", moeda005);
  printf("%.0lf moeda(s) de R$ 0.01\n", moeda001);

  return 0;
}