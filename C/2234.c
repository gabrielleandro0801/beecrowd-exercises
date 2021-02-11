#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 2234 URI
  int cacho;
  int parti;
  float media;

  scanf("%d %d", &cacho, &parti);
  media = (cacho/(parti*1.00))/1;
  printf("%.2f\n", media);
    return 0;
}
