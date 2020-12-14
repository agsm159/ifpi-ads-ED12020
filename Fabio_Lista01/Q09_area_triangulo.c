#include <stdio.h>
#include <stdlib.h>

int main(){

    double base, altura, area;
    printf("Digite o valor da base e da altura: ");
    scanf("%lf %lf", &base, &altura);

    area = (base * altura) / 2;

    printf("Valor da area: %0.2f \n", area );
    system("pause");
}
