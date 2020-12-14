#include <stdio.h>
#include <stdlib.h>

int main(){

    double valor1, valor2, valor3;
    printf("Digite o preco do primeiro produto: ");
    scanf("%lf", &valor1);
    printf("Digite o preco do segundo produto: ");
    scanf("%lf", &valor2);
    printf("Digite o preco do terceiro produto: ");
    scanf("%lf", &valor3);

    if (valor1 != valor2 && valor1 != valor3 && valor2 != valor3){
        if(valor1 < valor2 && valor1 < valor3){
            printf("O primeiro produto de R$%0.2f e mais barato.\n", valor1);
        } if(valor2 < valor1 && valor2 < valor3){
            printf("O segundo produto de R$%0.2f e mais barato.\n", valor2);
        } else{
            printf("O terceiro produto de R$%0.2f e o mais barato.\n", valor3);
        }
    } else {
        printf("Existem dois produtos baratos com o mesmo preco.\n");
    }
    
    system("pause");
}
