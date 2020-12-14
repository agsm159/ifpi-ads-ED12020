#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int quant_comprada, total_comprado = 0;
    double preco, desconto, preco_total = 0;
    char nome[10];

    while(nome != 'FIM'){
        printf("Nome do Produto: ");
        scanf("%s",&nome);
        if(strcmp(nome, "FIM") == 0){
                break;
        } 
        printf("Preco: R$");
        scanf("%lf", &preco);
        printf("Quantidade: ");
        scanf("%d",&quant_comprada);
        preco_total += preco * quant_comprada;
        total_comprado += quant_comprada;
    }
        if(total_comprado <= 10){
            printf("Total: R$%0.2f\n", preco_total);
        }
        if(total_comprado > 10 && total_comprado <= 20){
            desconto = preco_total * 0.1;
            preco_total = preco_total - desconto;
            printf("Total: R$%0.2f\n", preco_total);
        }
        if(total_comprado > 20 && total_comprado<= 50){
            desconto = preco_total * 0.2;
            preco_total = preco_total - desconto;
            printf("Total: R$%0.2f\n", preco_total);
        }
        if(total_comprado > 50){
            desconto = preco_total * 0.25;
            preco_total = preco_total - desconto;
            printf("Total: R$%0.2f\n", preco_total);
        }

    system("pause");
}