#include <stdio.h>

int main(void) {
    float l, c, p;
    printf("entre com largura e comprimento do terreno: ");
    scanf("%f %f", &l, &c);

    printf("entre com preco do metro de tela: ");
    scanf("%f", &p);

    printf("o custo para cercar o terreno e R$%.2f\n", l*c*p);

    return 0;
}
