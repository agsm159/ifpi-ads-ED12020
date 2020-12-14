#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia;
    printf("Digite um numero de 1 a 7 correspondente a um dia da semana: ");
    scanf("%d", &dia);

    switch (dia)
    {
    case 1:
        printf("Esse numero correponde a Domingo.\n");
        break;
    case 2:
        printf("Esse numero correponde a Segunda.\n");
        break;
    case 3:
        printf("Esse numero correponde a Terca.\n");
        break;
    case 4:
        printf("Esse numero correponde a Quarta.\n");
        break;
    case 5:
        printf("Esse numero correponde a Quinta.\n");
        break;
    case 6:
        printf("Esse numero correponde a Sexta.\n");
        break;
    case 7:
        printf("Esse numero correponde a Sabado.\n");
        break;
    
    default:
        printf("Numero invalido!");
        break;
    }
    system("pause");
}
