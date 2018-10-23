#include <stdio.h>

const float PI = 3.141592;

int main(void) {
    float r, area;

    printf("digite o raio: ");
    scanf("%f", &r);

    area = PI * (r*r);

    printf("area do circulo e %.2f\n", area);


    return 0;
}
