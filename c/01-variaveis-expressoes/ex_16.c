#include <stdio.h>

int main(void) {
    float P, C;

    printf("digite o comprimento em polegadas: ");
    scanf("%f", &P);

    C = P * 2.54;

    printf("comprimento convertido para centimetros: %f\n", C);


    return 0;
}
