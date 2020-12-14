#include <stdio.h>
#include <stdlib.h>

int main(){

    int meses, anos, num;
    printf("Digite a quantidade de meses: ");
    scanf("%d", &num);

    meses = num % 12;
    anos = (num - meses) / 12;

    printf("Resultado da transformacao: %d anos %d meses \n", anos, meses);
    system("pause");
}
