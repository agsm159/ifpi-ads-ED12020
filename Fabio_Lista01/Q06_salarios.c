#include <stdio.h>
#include <stdlib.h>

int main(){

    double salario, aumento, novo_salario;
    printf("Salario do trabalhador: ");
    scanf("%lf", &salario);
    
    aumento = salario * 0.25;
    novo_salario = salario + aumento;

    printf("Salario anterior: %0.2f \n", salario);
    printf("aumento: %0.2f \n", aumento);
    printf("salario atual: %0.2f \n", novo_salario);
    system ("pause");
}
