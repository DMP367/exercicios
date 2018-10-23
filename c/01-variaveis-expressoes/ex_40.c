#include <stdio.h>

int main(void) {
    int n;
    float q;
    printf("entre com os dias: ");
    scanf("%d", &n);

    q = (n * 30) * 0.92 ;

    printf("quantia a receber: %.2f\n", q);


    return 0;
}
