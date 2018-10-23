#include <stdio.h>

int main(void) {
    float r, c, d;

    printf("entre com o valor em real: ");
    scanf("%f", &r);

    printf("entre com o valor da cotacao do dolar: ");
    scanf("%f", &c);

    d = r / c;

    printf("valor em dolar e U$$%.2f\n", d);


    return 0;
}
