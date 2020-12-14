#include <stdio.h>
#include <stdlib.h>

int main(){

    double custo_fabrica, custo_consumidor;
    printf("Digite o custo de fabrica do carro: ");
    scanf("%lf", &custo_fabrica);
    
    custo_consumidor = custo_fabrica + (custo_fabrica * 0.28) + (custo_fabrica * 0.45);

    printf("O custo ao consumidor sera de: R$ %0.2f \n" ,custo_consumidor);
    system("pause");
}
