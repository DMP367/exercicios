#include <stdio.h>

int main(void) {
    float nota1, nota2, nota3, nota4, media;

    printf("entre com o valor das 4 notas: ");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("a media e %.2f\n", media);

    return 0;
}
