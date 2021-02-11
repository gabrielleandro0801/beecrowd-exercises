#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main()
{
    //PROJETO URI 2160
    int tam;
    char nome[502];
    gets(nome);
    tam = strlen(nome);
    if(tam <= 80){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}
