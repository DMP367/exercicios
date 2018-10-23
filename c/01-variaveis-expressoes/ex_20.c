#include <stdio.h>

int main(void) {
    float k, l;

    printf("digite a massa em kilos: ");
    scanf("%f", &k);

    l = k / 0.45;

    printf("massa convertida para libras: %f\n", l);

    return 0;
}
