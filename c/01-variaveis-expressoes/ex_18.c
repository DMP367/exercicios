#include <stdio.h>

int main(void) {
    float m, l;

    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &m);

    l = 1000 * m;

    printf("volume convertido para litros: %f\n", l);


    return 0x00;
}
