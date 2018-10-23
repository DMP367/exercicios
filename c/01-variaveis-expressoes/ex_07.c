#include <stdio.h>

int main(void) {
    float c, f;
    printf("digite temperatura em fahrenheit: ");
    scanf("%f", &f);

    c = 5.0 * (f - 32.0)/9.0;
    
    printf("temperatura convertida para celsius: %f", c);

    return 0x00;
}
