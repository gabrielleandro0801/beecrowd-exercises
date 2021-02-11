#include <stdio.h>
#include <stdlib.h>

int main()
{
    //PROJETO 1067 URI
    int i, numero;
    scanf("%i", &numero);
    for(i = 1; i <= numero && numero <= 1000; i = i+2){
        printf("%i\n", i);
    }
    return 0;
}
