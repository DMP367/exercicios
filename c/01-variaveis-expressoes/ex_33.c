#include <stdio.h>

int main(void) {
    float lado;
    printf("entre com o lado de um quadrado: ");
    scanf("%f", &lado);

    printf("area do quadrado e %.2f\n", lado*lado);
    
    return 0;
}
