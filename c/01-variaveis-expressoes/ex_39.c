#include <stdio.h>

const float premio = 780000;

int main(void) {
    float pri, seg, ter;

    pri = premio * 0.46;
    seg = premio * 0.32;
    ter = premio - (pri + seg);

    printf("Primeiro: %.2f\nSegundo: %.2f\nTerceiro: %.2f\n", pri, seg, ter);

    return 0;
}
