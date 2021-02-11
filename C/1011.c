#include <stdio.h>
 
int main() {
 
    double A;
    double volume, pi;
    pi = 3.14159;
    scanf("%lf", &A);

    volume = (4.0/3)*pi*(A*A*A);
    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}