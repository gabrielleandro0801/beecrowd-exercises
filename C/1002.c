#include <stdio.h>
 
int main() {
 
    double raio;
    double n;
    n = 3.14159;
    double area;
    scanf("%lf", &raio);
    
    area = n * (raio*raio);
    
    printf("A=%.4lf\n", area);
 
    return 0;
}