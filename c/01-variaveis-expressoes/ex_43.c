#include <stdio.h>

int main(void) {
    float valor;
    printf("entre com o valor: ");
    scanf("%f", &valor);

    printf("total a pagar com desconto de 10: %.2f\n", valor*0.90);
    printf("valor de cada parcela, no parcelamento 3x sem juros: %.2f\n", valor/3);
    printf("comissao do vendedor, no caso da venda ser a vista: %.2f\n", (valor*0.90) * 0.05);
    printf("comissao do vendedor, no caso de venda parcelada: %.2f\n", (valor*0.05));

    return 0;
}
