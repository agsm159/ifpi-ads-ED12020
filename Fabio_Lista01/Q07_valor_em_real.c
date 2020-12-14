#include <stdio.h>
#include <stdlib.h>

int main(){

    double valor, porcent_valor;
    printf("Valor em reais: ");
    scanf("%lf", &valor);
    
    porcent_valor = valor * 0.70;

    printf("%0.2f coresponde a 70/100 do valor de %0.2f \n", porcent_valor, valor);
    system ("pause");
}
