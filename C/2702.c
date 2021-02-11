#include <stdio.h>
#include <stdlib.h>

int main()
{
   //PROJETO 2702 URI
  int dspFrango;
  int dspBife;
  int dspMassa;

  int pediFrango;
  int pediBife;
  int pediMassa;

  int frango;
  int bife;
  int massa;

  int naoRecebem = 0;

  scanf("%d %d %d", &dspFrango, &dspBife, &dspMassa);
  scanf("%d %d %d", &pediFrango, &pediBife, &pediMassa);

  frango = dspFrango - pediFrango;
  if(frango < 0){
    naoRecebem = naoRecebem + (frango * -1);
  }

  bife = dspBife - pediBife;
  if(bife < 0){
    naoRecebem = naoRecebem + (bife * -1);
  }

  massa = dspMassa - pediMassa;
  if(massa < 0){
    naoRecebem = naoRecebem + (massa * -1);
  }

  printf("%d\n", naoRecebem);

    return 0;
}
