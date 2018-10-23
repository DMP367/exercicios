#include <stdio.h>

int main(void) {
    float m, j;

    printf("digite o comprimento em jardas: ");
    scanf("%f", &j);

    m = 0.91 * j;

    printf("comprimento convertido em metros: %f\n", m);

    return 0;
}
