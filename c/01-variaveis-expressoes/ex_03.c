#include <stdio.h>

int main(void){
    int n1, n2, n3;
    printf("entre com tres valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("%d + %d + %d = %d", n1, n2, n3, (n1+n2+n3));

    return 0x00;
}
