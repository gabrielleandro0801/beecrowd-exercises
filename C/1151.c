#include <stdio.h>

int fibonacci(int n){
  if(n <= 1){
    return n;
  }else{
    return fibonacci(n-1) + fibonacci(n-2);
  }
}
int main(void) {
  int num;
  scanf("%d", &num);

  int vetor[num-1];

  int i;
  for(i = 0; i < num-1; i++){
    printf("%d ", fibonacci(i));
    vetor[i] = fibonacci(i);
  }
  printf("%d\n", vetor[num-2]+vetor[num-3]);

  return 0;
}