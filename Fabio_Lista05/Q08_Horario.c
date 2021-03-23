#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50

void main(){

    char horario[tam];

    printf("Digite o horario no formato(hh:mm:ss): ");
    gets(horario);
    printf("Horario: %c%c hora(s), %c%c minuto(s) e %c%c segundo(s).", horario[0],horario[1],horario[3],horario[4],horario[6],horario[7]);

    printf("\n");
    system("pause");
}