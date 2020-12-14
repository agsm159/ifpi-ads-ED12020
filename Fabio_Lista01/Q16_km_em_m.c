#include <stdio.h>
#include <stdlib.h>

int main(){

    double km, m;
    printf("Digite o comprimento em km: ");
    scanf("%lf", &km);

    m = km * 1000;

    printf("Valor transformado em metros e: %0.2f \n", m );
    system("pause");
}
