#include <stdio.h>

int main(void) {

    float k, m; /* k -> quilometros - m -> milhas */

    printf("digite a distancia em milhas: ");
    scanf("%f", &m);

    k = 1.61 * m;

    printf("distancia convertida para quilometros: %f\n", k);

    return 0x00;
}
