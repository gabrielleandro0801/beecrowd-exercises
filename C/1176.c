#include <stdio.h>


int main(void) {
  int vezes;
  scanf("%d", &vezes);
  
  unsigned long long int vetor[61];
  vetor[0] = 0;
  vetor[1] = 1;
  vetor[2] = 1;

  long long int num_1 = 1;
  long long int num_2 = 1;

  int i;
  for(i = 3; i < 61; i++){;
    vetor[i] = num_1 + num_2;
    num_2 = num_1;
    num_1 = vetor[i]; 
  }

  int num;
  for(i = 0; i < vezes; i++){
    scanf("%d", &num);
    printf("Fib(%d) = %llu\n", num, vetor[num]);
  }


  return 0;
}