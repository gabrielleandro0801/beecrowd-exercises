#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1064 URI
  double numA;
  double numB;
  double numC;
  double numD;
  double numE;
  double numF;

  scanf("%lf", &numA);
  scanf("%lf", &numB);
  scanf("%lf", &numC);
  scanf("%lf", &numD);
  scanf("%lf", &numE);
  scanf("%lf", &numF);

  int qtdPositivo = 0;
  double media = 0;

  double ssA = 0;
  double ssB = 0;
  double ssC = 0;
  double ssD = 0;
  double ssE = 0;
  double ssF = 0;

  if(numA > 0){
    ssA = numA;
    qtdPositivo = qtdPositivo + 1;
    media = media + numA;
  }
  if(numB > 0){
    ssB = numB;
    qtdPositivo = qtdPositivo + 1;
    media = media + numB;
  }
  if(numC > 0){
    ssC = numC;
    qtdPositivo = qtdPositivo + 1;
    media = media + numC;
  }
  if(numD > 0){
    ssD = numD;
    qtdPositivo = qtdPositivo + 1;
    media = media + numD;
  }
  if(numE > 0){
    ssE = numE;
    qtdPositivo = qtdPositivo + 1;
    media = media + numE;
  }
  if(numF > 0){
    ssF = numF;
    qtdPositivo = qtdPositivo + 1;
    media = media + numF;
  }

  media = media / qtdPositivo;
  printf("%d valores positivos\n", qtdPositivo);
  printf("%.1lf\n", media);

    return 0;
}
