#include <stdio.h>

int main(void) {
    float G, R;

    printf("digite o valor do angulo em radianos: ");
    scanf("%f", &R);

    G = R * 180/3.14; /* assumi o valor de PI como 3.14 */

    printf("valor do angulo em graus: %f\n", G);


    return 0;
}
