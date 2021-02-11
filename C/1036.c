#include <stdio.h>
#include <math.h>

int main(void) {
  double a, b, c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);

  double delta;
  double raizDelta;
  double r1, r2;

  delta = (b*b)-4*a*c;

  if(delta > 0 && a!=0){
    raizDelta = sqrt(delta);
    r1 = ((b*(-1)) + raizDelta)/(2*a);
    r2 = ((b*(-1)) - raizDelta)/(2*a);
    printf("R1 = %.5lf\n", r1);
    printf("R2 = %.5lf\n", r2);
  }else{
    printf("Impossivel calcular\n");
  }

  return 0;
}