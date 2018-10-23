#include <stdio.h>

int main(void) {
    short idade, ano;
    printf("entre com o ano atual: ");
    scanf("%hd", &ano);

    printf("entre com sua idade: ");
    scanf("%hd", &idade);

    printf("seu ano de nascimento e %hd\n", (ano-idade));

    return 0;
}
