#include <stdio.h>
#include <stdlib.h>

int main(){

    double ms, kmh;
    printf("Digite a velocidade em km/h: ");
    scanf("%lf", &kmh);

    ms = kmh / 3.6;

    printf("Valor transformado em m/s e: %0.2f \n", ms );
    system("pause");
}
