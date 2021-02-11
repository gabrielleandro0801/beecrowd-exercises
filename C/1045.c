#include <stdio.h>

int main(void) {
  double A, B, C;
  double caixa;
  scanf("%lf %lf %lf", &A, &B, &C);

  if(A < B){
    caixa = A;
    A = B;
    B = caixa;
  }  
  
  if(A < C){
    caixa = A;
    A = C;
    C = caixa;
  }

  if(B < C){
    caixa = B;
    B = C;
    C = caixa;
  }
  
  if(A >= (B + C)){
    printf("NAO FORMA TRIANGULO\n");
  }else{
    if( (A*A)==((B*B)+(C*C)) ){
      printf("TRIANGULO RETANGULO\n");
    }else if( (A*A)>((B*B)+(C*C)) ){
      printf("TRIANGULO OBTUSANGULO\n");
    }else if( (A*A)<((B*B)+(C*C)) ){
      printf("TRIANGULO ACUTANGULO\n");
    }
  } 
  
  if(A == B && B == C){
    printf("TRIANGULO EQUILATERO\n");
  }else if(A == B || B == C){
    printf("TRIANGULO ISOSCELES\n");
  }

  return 0;
}