#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    
    char data[10], mes[10], mes_comp, mes_num[1];
    int j = 0, mes_int;
    
    printf("Digite a data no formato DD/MM/AAAA: ");
    fflush(stdin);
    gets(data);
    printf("%c%c de ", data[0], data[1]);

    mes_num[0] = data[3];
    mes_num[1] = data[4];
    mes_int = atoi(mes_num);
    
    switch (mes_int){
    case 1:
        printf(" Janeiro de ");
        break;
    case 2:
        printf(" Fevereiro de ");
        break;
    case 3:
        printf(" Marco de ");
        break;
    case 4:
        printf(" Abril de ");
        break;
    case 5:
        printf(" Maio de ");
        break;
    case 6:
        printf(" Junho de ");
        break;
    case 7:
        printf(" Julho de ");
        break;
    case 8:
        printf(" Agosto de ");
        break;
    case 9:
        printf(" Setembro de ");
        break;
    case 10:
        printf(" Outubro de ");
        break;
    case 11:
        printf(" Novembro de ");
        break;
    case 12:
        printf(" Dezembro de ");
        break;
    default:
        printf(" Numero Incorreto para Mes ");
        break;
    }

    printf(" %c%c%c%c\n", data[6], data[7], data[8], data[9]);
    system("pause");
}