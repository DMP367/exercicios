#include <stdio.h>

int main(void) {
    char c;
    printf("digite uma letra: ");
    setbuf(stdin, NULL);
    scanf("%c", &c);
        
    printf("%c - %c\n", c, c+32);

    return 0;
}
