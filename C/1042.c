#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO URI 1042
  int a;
  int b;
  int c;

  scanf("%i", &a);
  scanf("%i", &b);
  scanf("%i", &c);

  if(a>b && a>c && b>c){ // A>B>C
    printf("%i\n", c);
    printf("%i\n", b);
    printf("%i\n", a);
  }else if(a>b && a>c && c>b){ //A>C>B
    printf("%i\n", b);
    printf("%i\n", c);
    printf("%i\n", a);
  }else if(b>a && b>c && a>c){ //B>A>C
    printf("%i\n", c);
    printf("%i\n", a);
    printf("%i\n", b);
  }else if(b>a && b>c && c>a){ //B>C>A
    printf("%i\n", a);
    printf("%i\n", c);
    printf("%i\n", b);
  }else if(c>a && c>b && a>b){ //C>A>B
    printf("%i\n", b);
    printf("%i\n", a);
    printf("%i\n", c);
  }else{ //C>B>A
    printf("%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);
  }

    printf("\n%i\n", a);
    printf("%i\n", b);
    printf("%i\n", c);

    return 0;
}