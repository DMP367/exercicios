#include <stdio.h>

int main(void) {
    float k, c;
    printf("digite temperatura em celsius: ");
    scanf("%f", &c);
    
    k = c + 273.15;

    printf("temperatura convertida para kelvin: %f", k);

    return 0x00;
}
