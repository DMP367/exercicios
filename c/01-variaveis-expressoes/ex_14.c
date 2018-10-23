#include <stdio.h>

int main(void) {
    float R, G;

    printf("digite o valor do angulo em graus: ");
    scanf("%f", &G);

    R = G * 3.14/180; /* assumi o valor de PI sendo 3.14 */

    printf("valor do angulo em radianos: %f\n", R);

        
    return 0;
}
