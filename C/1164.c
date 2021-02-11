#include <stdio.h>

int main(){
	int vezes;
  scanf("%d", &vezes);

  int i, j, somaDivi = 0;
  for(i = 0; i < vezes; i++){
    somaDivi = 0;
    int num;
    scanf("%d", &num);
    for(j = 1; j < num; j++){
      if(num%j == 0){
        somaDivi += j;
      }
    }
    if(num == somaDivi){
      printf("%d eh perfeito\n", num);
    }else{
      printf("%d nao eh perfeito\n", num);
    }
  }

  

	return 0;
}