#include <stdio.h>
#include <stdlib.h>

int main(){

    double ms, kmh;
    printf("Digite a velocidade em m/s: ");
    scanf("%lf", &ms);

    kmh = ms * 3.6;

    printf("Valor transformado em Km/h e: %0.2f \n", kmh );
    system("pause");
}
