#include <stdio.h>

int main(void) {
    int h_i, m_i, s_i, h_d, m_d, s_d;
    int time_total;

    printf("entre com o horario de inicio: ");
    scanf("%d %d %d", &h_i, &m_i, &s_i);

    printf("entre com o tempo de duracao: ");
    scanf("%d %d %d", &h_d, &m_d, &s_d);

    time_total = h_d * 3600 + m_d * 60 + s_d;
    time_total += h_i * 3600 + m_i * 60 + s_i;

    h_d = time_total/3600;
    time_total %= 3600;
    m_d = time_total/60;
    time_total %= 60;
    s_d = time_total;
    
    printf("final: %d : %d : %d\n", h_d, m_d, s_d);

    return 0;
}
