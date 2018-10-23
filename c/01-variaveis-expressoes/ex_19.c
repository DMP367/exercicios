#include <stdio.h>

int main(void) {
    
    float m, l;

    printf("digite o volume em litros: ");
    scanf("%f", &l);

    m = l / 1000;

    printf("volume convertido em metros cubicos: %f\n", m);

    return 0;
}
