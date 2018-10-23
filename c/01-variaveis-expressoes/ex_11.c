#include <stdio.h>

int main(void) {
    float k, m; /* k -> km/h - m -> m/s */

    printf("digite velociade em m/s: ");
    scanf("%f", &m);

    k = m * 3.6;

    printf("velocidae convertida para km/h: %f\n", k);

    return 0x00;
}
