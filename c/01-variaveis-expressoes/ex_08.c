#include <stdio.h>

int main(void) {
    float k, c;
    printf("Digite temperatura em kelvin: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("temperatura convertida em celsius: %f\n", c);

    return 0x00;
}
