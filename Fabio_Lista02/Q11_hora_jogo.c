#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

int main(){

    int h_inicio, m_inicio, h_final, m_final;
    print("Digite a hora de inicio do jogo: ");
    scanf("%d", &h_inicio);
    print("Digite o minuto de inicio do jogo: ");
    scanf("%d", &m_inicio);
    print("Digite a hora de fim do jogo: ");
    scanf("%d", &h_final);
    print("Digite o minuto de fim do jogo: ");
    scanf("%d", &m_final);

    duracao_partida(h_inicio, m_inicio, h_final, m_final);
    system("pause");
}
int duracao_partida(h_inicio, m_inicio, h_final, m_final){

    int h_total, m_total, diferenca;

    h_total = h_final - h_inicio;
    m_total = m_final - m_inicio;
    if (m_total <= 0) {
        m_total = ((m_total / 60) * (-1));
    } if (h_total <= 0){
        diferenca = 24 - h_inicio;
        h_total = h_final + diferenca;
    }
    h_total = h_total - m_total;
    m_total = (h_total % 1) * 60;
    h_total = h_total / 1;
    if(h_total <= 24){
        print("O tempo total de jogo e de: %d h %d min \n\n\n", h_total, m_total);
    } else {
        printf("O jogo nao pode durar mais que 24 horas \n\n\n");
    }  
}
