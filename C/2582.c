#include <stdio.h>

int main() {

    //PROJETO 2582 URI
  int vezes;
  scanf("%d", &vezes);

  int i;
  for(i=1; i<=vezes; i++){
    int num1;
    int num2;
    scanf("%d %d", &num1, &num2);
    int soma;
    soma = num1+num2;

    if(soma >=0 || soma <=10){
      switch(soma){
        case 0:
        printf("PROXYCITY\n");
        break;
        case 1:
        printf("P.Y.N.G.\n");
        break;
        case 2:
        printf("DNSUEY!\n");
        break;
        case 3:
        printf("SERVERS\n");
        break;
        case 4:
        printf("HOST!\n");
        break;
        case 5:
        printf("CRIPTONIZE\n");
        break;
        case 6:
        printf("OFFLINE DAY\n");
        break;
        case 7:
        printf("SALT\n");
        break;
        case 8:
        printf("ANSWER!\n");
        break;
        case 9:
        printf("RAR?\n");
        break;
        case 10:
        printf("WIFI ANTENNAS\n");
        break;
        default:
        break;
      }
    }

  }

    return 0;
}
