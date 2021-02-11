#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 2721 URI
  int A;
  int B;
  int C;
  int D;
  int E;
  int F;
  int G;
  int H;
  int I;
  int ultima;

  scanf("%d %d %d %d %d %d %d %d %d", &A, &B, &C, &D, &E, &F, &G, &H, &I);

  ultima = (A+B+C+D+E+F+G+H+I)%9;

  switch(ultima){
    case 1:
    printf("Dasher\n");
    break;

    case 2:
    printf("Dancer\n");
    break;

    case 3:
    printf("Prancer\n");
    break;

    case 4:
    printf("Vixen\n");
    break;

    case 5:
    printf("Comet\n");
    break;

    case 6:
    printf("Cupid\n");
    break;

    case 7:
    printf("Donner\n");
    break;

    case 8:
    printf("Blitzen\n");
    break;

    case 0:
    printf("Rudolph\n");
    break;
  }

    return 0;
}
