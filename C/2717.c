#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 2717 URI
  int expediente;
  int pres1;
  int pres2;

  scanf("%d", &expediente);
  scanf("%d %d", &pres1, &pres2);

  if((pres1+pres2)<=expediente){
    printf("Farei hoje!\n");
  }else{
    printf("Deixa para amanha!\n");
  }
    return 0;
}
