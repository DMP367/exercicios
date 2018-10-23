#include <stdio.h>

int main(void) {
    float h, d;

    printf("entre com a altura do degrau: ");
    scanf("%f", &d);

    printf("entre com a altura: ");
    scanf("%f", &h);

    printf("quantidade degraus: %d\n", (int)(h/d)+1);


    return 0;
}
