#include <stdio.h>

int main(void) {
    int n;
    float valor, tot;

    printf("entre com horas trabalhadas: ");
    scanf("%d", &n);
    printf("entre com o valor da hora trabalhada: ");
    scanf("%f", &valor);

    tot = (n*valor) * 1.10;

    printf("valor = %.2f\n", tot);

    return 0;
}
