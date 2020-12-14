#include <stdio.h>
#include <stdlib.h>

int main(){

    double m, cm;
    printf("Digite o comprimento em metros: ");
    scanf("%lf", &m);

    cm = m * 100;

    printf("Valor transformado em centimetros e: %0.2f \n", cm );
    system("pause");
}
