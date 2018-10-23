#include <stdio.h>

int main(void) {
    
    float a, m;

    printf("digite a area em metros quadrados: ");
    scanf("%f", &m);

    a = m * 0.000247;

    printf("area convertida para acres: %f\n", a);


    return 0;
}
