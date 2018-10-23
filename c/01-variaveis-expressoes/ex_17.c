#include <stdio.h>

int main(void) {
    float P, C;

    printf("digite comprimento em centimetros: ");
    scanf("%f", &C);

    P = C / 2.54;

    printf("comprimento convertido para polegadas: %f\n", P);


    return 0x00;
}
