#include <stdio.h>

int main(void){
    float c, f;
    printf("digite temperatura em celsius: ");
    scanf("%f", &c);

    f = c * (9.0/5.0) + 32.0;

    printf("Temperatura Convertida em Fahrenheit: %f", f);

    return 0x00;
}
