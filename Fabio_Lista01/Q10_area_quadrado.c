#include <stdio.h>
#include <stdlib.h>


int main(){

    double lado, area;
    printf("Digite o valor do lado: ");
    scanf("%lf", &lado);

    area = lado * lado;

    printf("Valor da area: %0.2f \n", area );
    system("pause");
}
