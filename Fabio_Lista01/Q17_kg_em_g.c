#include <stdio.h>
#include <stdlib.h>

int main(){

    double kg, g;
    printf("Digite o peso em kg: ");
    scanf("%lf", &kg);

    g = kg * 1000;

    printf("Valor transformado em gramas e: %0.2f \n", g );
    system("pause");
}
