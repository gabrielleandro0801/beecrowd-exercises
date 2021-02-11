#include <stdio.h>

int main(void) {
  double pAntigo;
  double pNovo;
  scanf("%lf %lf", &pAntigo, &pNovo);

  double vari;
  if(pAntigo*2 == pNovo){
    printf("100.00%%\n");
  }else if(pAntigo == pNovo){
    printf("0.00%%\n");
  }else{
    vari = ((pNovo-pAntigo)*100.00)/pAntigo;
    printf("%.2lf%%\n", vari);
  }
  

  return 0;
}