#include <stdio.h>
#include <stdlib.h>

int main(){

    double temp_c, temp_f;
    printf("Digite a temperatura em Celsius: ");
    scanf("%lf", &temp_c);

    temp_f = (9 * temp_c + 160) / 5;

    printf("Valor transformado em F e: %0.2f \n", temp_f );
    system("pause");
}
