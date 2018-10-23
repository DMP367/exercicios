#include <stdio.h>

int main(void) {
    int n;
    printf("digite um numero entre 1000 e 9999: ");
    scanf("%d", &n);

    printf("%d\n%d\n%d\n%d\n", (n/1000), (n%1000)/100, (n%1000)%100/10, (n%1000)%100%10); 

    return 0;
}
