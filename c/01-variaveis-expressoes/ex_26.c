#include <stdio.h>

int main(void) {
    
    float m, h;

    printf("digite a area em metros quadrados: ");
    scanf("%f", &m);

    h = m * 0.0001;

    printf("area convertida para hectares: %f\n", h);


    return 0;
}
