#include <stdio.h>

int main(void) {
  int C;
  int N;
  scanf("%d", &C);

  int divi = 0;
  int divisores = 0;

  int i, j, k;
  for(i = 0; i < C; i++){
    scanf("%d", &N);
    divisores = 0;
    for(j = N; j > 0; j--){
      divi = 0;
      for(k = j; k > 0; k--){
        if(j%k == 0){
          divi = divi + 1;
        }
      }
      if(divi%2 == 0){
        divisores = divisores + 1;
      }
    }
    printf("%d\n", divisores);
  }

  return 0;
}