#include <stdio.h>

int main(void) {
    float j1, j2, j3, premio; 
    float perc;

    printf("entre com o valor do jogador 1: ");
    scanf("%f", &j1);

    printf("entre com o valor do jogador 2: ");
    scanf("%f", &j2);
    
    printf("entre com o valor do jogador 3: ");
    scanf("%f", &j3);

    printf("entre com o valor do premio: ");
    scanf("%f", &premio);
    
    perc = j1 + j2 + j3;

    j1 = j1/perc;
    j2 = j2/perc;
    j3 = j3/perc;

    printf("percentual: j1 -> R$%.2f j2 -> R$%.2f j3 -> R$%.2f\n", j1*premio, j2*premio, j3*premio);
    
    return 0;
}
