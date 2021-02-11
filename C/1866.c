#include <stdio.h>

int main(){
	int vezes, fim = 0;
  scanf("%d", &vezes);

  int i;
  for(i = 0; i < vezes; i++){
    int num;
    scanf("%d", &num);
    if(num%2 == 0){
      printf("0\n");
    }else{
      printf("1\n");
    }
  }

  

	return 0;
}