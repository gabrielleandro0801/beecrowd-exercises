#include <stdio.h>

int main(void) {
  int vezes;
  scanf("%d", &vezes);

  int aluno[vezes];
  double nota[vezes];

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%d", &aluno[i]);
    scanf("%lf", &nota[i]);
  }

  double maior = nota[0];
  int posiMaior = 0;

  for(i = 0; i < vezes; i++){
    if(maior < nota[i]){
      maior = nota[i];
      posiMaior = i;
    }
  }

  if(maior >= 8.0){
    printf("%d\n", aluno[posiMaior]);
  }else{
    printf("Minimum note not reached\n");
  }

  return 0;
}