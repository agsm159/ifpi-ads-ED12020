#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num ,cont = 1,maior = 0,valor_atual = 0,valor_ant = 0;
    
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &num);
    
    while(cont <= num){
        printf("Digite um valor: ");
        scanf("%d", &valor_atual);
        if(valor_atual > valor_ant){
            maior = valor_atual;
            valor_ant = valor_atual;
        }
        cont += 1;
    }
    printf("O maior valor e: %d\n",maior);
    system("pause");
}
