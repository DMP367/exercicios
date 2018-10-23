#include <stdio.h>

#define quadrado(x) (x * x)

int main(void) {
    int valor1, valor2, valor3;
    
    printf("entre com 3 valores: ");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    printf("%d + %d + %d = %d\n", quadrado(valor1), quadrado(valor2), quadrado(valor3), (quadrado(valor1) + quadrado(valor2) + quadrado(valor3)));

    return 0;
}
