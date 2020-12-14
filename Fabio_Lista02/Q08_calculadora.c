#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1, num2, resultado;
    int opcao;
    printf("-------------CALCULADORA-------------\n");
    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);
    printf("-------------------------------------\n");
    printf("1-------------------Adicao\n");
    printf("2-------------------Subtracao\n");
    printf("3-------------------Muiltiplicacao\n");
    printf("4-------------------Divisao\n");
    printf("-------------------------------------\n");
    printf("Digite o numero da operacao que deseja realizar: ");
    scanf("%d", &opcao);
    switch(opcao) {

    case 1:
        resultado = num1 + num2;
        printf("Resultado: %0.2f \n", resultado);
        break;
    case 2:
        resultado = num1 - num2;
        printf("Resultado: %0.2f \n", resultado);
        break;
    case 3:
        resultado = num1 * num2;
        printf("Resultado: %0.2f \n", resultado);
        break;
    case 4:
        resultado = num1 / num2;
        printf("Resultado: %0.2f \n", resultado);
        break;
    default:
        printf("Opcao invalida! Tente novamente.\n");
        break;
    }
    system("pause");
}
