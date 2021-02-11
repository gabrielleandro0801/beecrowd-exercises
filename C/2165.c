#include <stdio.h>
#include <string.h>

int main(void) {
  char tweet[600];
  gets(tweet);

  if(strlen(tweet) > 140){
    printf("MUTE\n");
  }else{
    printf("TWEET\n");
  }
  
  return 0;
}