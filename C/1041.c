#include <stdio.h>
#include <stdlib.h>

int main()
{
  float x;
  float y;

  scanf("%f %f", &x, &y);

  if(x == 0 && y == 0){ //ORIGEM
    printf("Origem\n");
  }else if(x == 0 && y != 0){ // EIXO X
    printf("Eixo Y\n");
  }else if(x != 0 && y == 0){ //EIXO Y
    printf("Eixo X\n");
  }else if(x > 0 && y > 0){ //Q1
    printf("Q1\n");
  }else if(x < 0 && y > 0){ //Q2
    printf("Q2\n");
  }else if(x < 0 && y <0){ //Q3
    printf("Q3\n");
  }else{ //Q4
    printf("Q4\n");
  }
    return 0;
}
