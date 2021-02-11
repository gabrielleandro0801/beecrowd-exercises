#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1175 URI
  int vet[20];
  int vetContrario[20];

  int i;
  for(i = 0; i<20; i++){
    scanf("%d", &vet[i]);
  }

  int j = 0;
  for(j = 0; j<20; j++){
    vetContrario[j] = vet[19-j];
    printf("N[%d] = %d\n", j, vetContrario[j]);
  }
    return 0;
}
