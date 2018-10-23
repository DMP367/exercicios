#include <stdio.h>

const float PI = 3.141592;

void main(void) {
    float h, r, v;
    printf("entre com o raio e altura: ");
    scanf("%f %f",  &r, &h);

    v = PI * (r*r) * h;
    
    printf("volume = %.2f\n", v);

    return;
}
