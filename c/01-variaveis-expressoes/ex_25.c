#include <stdio.h>

int main(void) {
    float a, m;

    printf("digite a area em acres: ");
    scanf("%f", &a);

    m = a * 4048.58;

    printf("area convertida em metros quadrados: %f\n", m);

    return 0;
}
