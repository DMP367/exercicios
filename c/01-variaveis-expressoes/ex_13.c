#include <stdio.h>

int main(void) {
    float k, m; /* k-> quilometros - m -> milhas */

    printf("digite a distancia em quilometros: ");
    scanf("%f", &k);

    m = k / 1.61;

    printf("distancia convertida em milhas %f\n", m);


    return 0;
}
