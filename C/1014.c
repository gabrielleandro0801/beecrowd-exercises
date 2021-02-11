#include <stdio.h>
 
int main() {
 
    int X;
    float Y;
    float cons;
    
    scanf("%d", &X);
    scanf("%f", &Y);
    cons = X/Y;
    
    printf("%.3f km/l\n", cons);
    return 0;
}