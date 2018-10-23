#include <stdio.h>

int main(void) {
    int h, m, s;
    printf("digite o tempo em segundo: "); 
    scanf("%d", &s);

    h = s/3600;
    s %= 3600;
    m = s / 60;
    s %=60;

    printf("Horas: %d\nMinutos: %d\nSegundos: %d\n", h, m, s);


    return 0;
}
