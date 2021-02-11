#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int quantia[vezes];
  char animal[vezes];

  float percenCoelho;
  float percenRato;
  float percenSapo;
  int coelho = 0;
  int rato = 0;
  int sapo = 0;

  int soma = 0;

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d %c", &quantia[i], &animal[i]);
  }

  for(i = 0; i < vezes; i++){
    soma += quantia[i];
  }

  for(i = 0; i < vezes; i++){
    if(animal[i] == 'C' || animal[i] == 'c'){
      coelho += quantia[i];
    }else if(animal[i] == 'R' || animal[i] == 'r'){
      rato += quantia[i];
    }else if(animal[i] == 'S' || animal[i] == 's'){
      sapo += quantia[i];
    }
  }

  printf("Total: %d cobaias\n", soma);
  printf("Total de coelhos: %d\n", coelho);
  printf("Total de ratos: %d\n", rato);
  printf("Total de sapos: %d\n", sapo);

  percenCoelho = (coelho*1.00/soma)*100;
  percenSapo = (sapo*1.00/soma)*100;
  percenRato = (rato*1.00/soma)*100;

  printf("Percentual de coelhos: %.2f %%\n", percenCoelho);
  printf("Percentual de ratos: %.2f %%\n", percenRato);
  printf("Percentual de sapos: %.2f %%\n", percenSapo);
  return 0;
}