#include <stdio.h>
#include <stdlib.h>

int main(){

    int horas, dias, semanas, num;
    printf("Digite a quantidade de horas: ");
    scanf("%d", &num);

    horas = ((num % 168) % 24); 
    dias = (num - horas) / 168;
    semanas = (num - ((dias * 24) + horas)) / 168;

    printf("Resultado da transformacao: %d semanas %d dias %d horas \n", semanas, dias, horas);
    system("pause");
}
