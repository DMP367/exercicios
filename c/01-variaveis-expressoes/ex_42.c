#include <stdio.h>

int main(void) {
    
    float sal_bas, sal_fin;
    printf("entre com o salario base: ");
    scanf("%f", &sal_bas);

    sal_fin = sal_bas * 0.98;

    printf("salario final: %.2f\n", sal_fin);

    return 0;
}
