#include <stdio.h>
#include <stdlib.h>

int main(){

    double dolar, real;
    printf("Digite o valor em dolar($): ");
    scanf("%lf", &dolar);

    real = dolar * 5.35;

    printf("Valor em dolares equivale a R$:%0.2f \n", real );
    system("pause");
}
