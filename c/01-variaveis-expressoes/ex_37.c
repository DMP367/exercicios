#include <stdio.h>

int main(void) {
    
    float v, d;

    printf("Digite o valor do produto: ");
    scanf("%f", &v);

    d = v * 0.88;

    printf("valor + desconto = %.2f\n", d);
    

    return 0;
}
