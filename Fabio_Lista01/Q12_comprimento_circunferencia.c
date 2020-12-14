#include <stdio.h>
#include <stdlib.h>

int main(){

    double raio, comprimento;
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%lf", &raio);

    comprimento = 2 * 3.14 * raio;

    printf("Valor do comprimento: %0.2f \n", comprimento );
    system("pause");
}
