#include <stdio.h>

int main(void) {
  double A;
  double B;
  double C;
  double res;

  scanf("%lf", &A);
  scanf("%lf", &B);
  scanf("%lf", &C);

  if(A<B+C && B<A+C && C<A+B){
    res = A + B + C;
    printf("Perimetro = %.1lf\n", res);
  }else{
    res = ((A+B)*C)/2;
    printf("Area = %.1lf\n", res);
  }

  return 0;
}