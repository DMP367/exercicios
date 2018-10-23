#include <stdio.h>

int main(void) {
    float sal, aum;
    printf("entre com o salario: ");
    scanf("%f", &sal);
    
    aum = sal * 1.25;

    printf("salario + aumento = %.2f\n", aum);

    return 0;
}
