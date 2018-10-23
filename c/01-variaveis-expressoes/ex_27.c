#include <stdio.h>

int main(void) {
    float h, m;

    printf("digite a area em hectares: ");
    scanf("%f", &h);

    m = h * 10000;

    printf("area convertida para metros quadrados: %f\n", m);

    return 0;
}
