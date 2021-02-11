#include <stdio.h>

int main() {
 double A, B , C , tri, circ, trap, praca, retangulo;

 scanf("%lf %lf %lf ", &A, &B, &C);

  tri = ( A * C)/2;
  circ = (C * C)* 3.14159;
  trap = ((A + B)*C)/2;
  praca = B*B;
  retangulo = A*B;

 printf("TRIANGULO: %.3f\n", tri);
 printf("CIRCULO: %.3f\n", circ);
 printf("TRAPEZIO: %.3f\n", trap);
 printf("QUADRADO: %.3f\n", praca);
 printf("RETANGULO: %.3f\n", retangulo);

 
    return 0;
}