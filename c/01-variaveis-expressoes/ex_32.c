#include <stdio.h>

int main(void) {
    int n;

    printf("entre com um numero inteiro: ");
    scanf("%d", &n);

    printf("soma: %d\n",(3 * (n+1)) + (2 * (n-1)));

    return 0;
}
