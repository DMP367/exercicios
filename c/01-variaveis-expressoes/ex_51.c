#include <stdio.h>
#include <math.h>

int main(void) {
    float x, y, dist_orig;

    printf("entre com valores para x e y: ");
    scanf("%f %f", &x, &y);

    dist_orig = sqrt(pow(0 - x, 2) + powl(0 - y, 2));

    printf("distancia entre (0.0,0.0) e (%.2f,%.2f): %.2f\n", x, y, dist_orig);

    return 0;
}
