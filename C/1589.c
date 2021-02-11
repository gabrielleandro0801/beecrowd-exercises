#include <stdio.h>


int main(void) {
  int vezes;
  scanf("%d", &vezes);
  
  unsigned long long int raio1;
  unsigned long long int raio2;
  unsigned long long int raioT;

  int i;
  for(i = 0; i < vezes; i++){
    scanf("%llu", &raio1);
    scanf("%llu", &raio2);
    raioT = raio1 + raio2;
    printf("%llu\n", raioT);
  }
  


  return 0;
}