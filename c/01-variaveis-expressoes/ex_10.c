#include <stdio.h>

int main(void) {
    float k, m; /* k -> km/h - m - m/s */
    printf("digite a velocidade em km/h: ");
    scanf("%f", &k);

    m = k/3.6;

    printf("velociade convertida para m/s: %f\n", m);

    return 0x00;
}
