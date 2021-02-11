#include <stdio.h>

int main(void) {
  char primeira[15];
  char segunda[15];
  char terceira[15];

  scanf("%s", primeira);
  scanf("%s", segunda);
  scanf("%s", terceira);

  if(primeira[0] == 'v'){
    if(segunda[0] == 'a'){
      if(terceira[0] == 'c'){
        printf("aguia\n");
      }else if(terceira[0] == 'o'){
        printf("pomba\n");
      }
    }else if(segunda[0] == 'm'){
      if(terceira[0] == 'o'){
        printf("homem\n");
      }else if(terceira[0] == 'h'){
        printf("vaca\n");
      }
    }
  }else if(primeira[0] == 'i'){
    if(segunda[0] == 'i'){
      if(terceira[2] == 'm'){
        printf("pulga\n");
      }else if(terceira[2] == 'r'){
        printf("lagarta\n");
      }
    }else if(segunda[0] == 'a'){
      if(terceira[0] == 'h'){
        printf("sanguessuga\n");
      }else if(terceira[0] == 'o'){
        printf("minhoca\n");
      }
    }
  }

  return 0;
}