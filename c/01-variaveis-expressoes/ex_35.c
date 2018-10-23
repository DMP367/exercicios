#include <stdio.h>
#include <math.h>

int main(void) {
    float a, b, hipo;
    printf("entre com o valor dos catetos: ");
    scanf("%f %f", &a, &b);

    hipo = sqrt((a*a) + (b*b));

    printf("hipotenusa = %.2f\n", hipo);

    return 0;
}
