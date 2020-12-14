#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double raio, volume;
    printf("Digite o valor do raio da esfera: ");
    scanf("%lf", &raio);

    volume = (3.14 * 4 * pow(raio, 3)) / 3;

    printf("Valor do volume e: %0.2f \n", volume );
    system("pause");
}
