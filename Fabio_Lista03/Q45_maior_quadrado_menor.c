#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int num ,cont = 1,maior = 0,valor_atual = 0,valor_ant = 0;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &num);
    
    while(cont <= num){
        printf("Digite um valor: ");
        scanf("%d", &valor_atual);
        valor_atual = sqrt(valor_atual);
        
        if(valor_atual > valor_ant){
            maior = valor_atual;
            valor_ant = valor_atual;
            maior = pow(maior, 2);
        }
        cont += 1;
    }
    printf("O maior quadrado menor e: %d\n", maior);
    system("pause");
}