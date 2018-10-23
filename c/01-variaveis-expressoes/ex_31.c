#include <stdio.h>

int main(void) {
    int n;
    printf("entre com um numero inteiro: ");
    scanf("%d", &n);

    printf("antecessor: %d\nnumero: %d\nsucessor: %d\n", n-1, n, n+1);


    return 0;
}
