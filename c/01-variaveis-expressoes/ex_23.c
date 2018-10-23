#include <stdio.h>

int main(void) {
    float j, m;

    printf("digite o comprimento em metros: ");
    scanf("%f", &m);

    j = m / 0.91;

    printf("comprimento convertido em jardas: %f\n", j);

    
    return 0;
}
