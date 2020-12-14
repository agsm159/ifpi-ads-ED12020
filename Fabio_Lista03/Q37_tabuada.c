#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int tipo, num, cont = 1;
    double tab;

    printf("---------TABUADA---------\n");
    printf("1 -------- ADICAO\n");
    printf("2 -------- SUBTRACAO\n");
    printf("3 -------- MULTIPLICACAO\n");
    printf("4 -------- DIVISAO\n");
    printf("-------------------------\n");

    printf("Digite o numero correspodente a operacao que deseja ver a tabuada: ");
    scanf("%d", &tipo);
    printf("Digite o numero desejado: ");
    scanf("%d", &num);

    while (cont <= 10){
    
        switch (tipo){
        case 1:
            tab = num + cont;
            printf("%d + %d = %0.2f\n", num, cont, tab);
            cont++;
            break;
        case 2:
            tab = num - cont;
            printf("%d - %d = %02.f\n", num, cont, tab);
            cont++;
            break;
        case 3:
            tab = num * cont;
            printf("%d x %d = %0.2f\n", num, cont, tab);
            cont++;
            break;
        case 4:
            tab = num / cont;
            printf("%d / %d = %0.2f\n", num, cont, tab);
            cont++;
            break;
        default:
            printf("Operacao invalida!");
            break;
        }
    }
    system("pause");
}