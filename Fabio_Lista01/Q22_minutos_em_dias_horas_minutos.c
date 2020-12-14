#include <stdio.h>
#include <stdlib.h>

int main(){

    int horas, dias, min, num;
    printf("Digite a quantidade de minutos: ");
    scanf("%d", &num);

    min = (num % 1440) % 60; 
    dias = (num / 1440);
    horas = (num - min -(dias * 1440)) / 60;

    printf("Resultado da transformacao: %d dias %d horas %d minutos \n", dias, horas, min);
    system("pause");
}
