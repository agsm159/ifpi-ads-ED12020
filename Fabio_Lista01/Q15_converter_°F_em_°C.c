#include <stdio.h>
#include <stdlib.h>

int main(){

    double temp_c, temp_f;
    printf("Digite a temperatura em F: ");
    scanf("%lf", &temp_f);

    temp_c = (5 * temp_f - 160) / 9;

    printf("Valor transformado em Celsius e: %0.2f \n", temp_c );
    system("pause");
}
