#include <stdio.h>

int main(void) {
    
    float l, k;

    printf("digite a massa em libras: ");
    scanf("%f", &l);

    k = l * 0.45;

    printf("massa convertida para kilos: %f\n", k);

    return 0;
}
