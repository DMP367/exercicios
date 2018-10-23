#include <stdio.h>

int main(void) {
    int n;
    printf("entre com um numero inteiro: ");
    scanf("%d", &n);

    printf("%d%d%d\n",(n%100)%10, (n%100)/10, (n/100));

    return 0;
}
