#include <stdio.h>
#include <stdlib.h>

void main(){
    float salario, novo_salario, soma_atual, soma_ajust, dif, ajuste;
    
    while(salario != 0){
        printf("Digite o salario do funcionario('0' para interromper): ");
        scanf("%f", &salario);
        
        soma_atual += salario;
        if (salario <= 2999.99){
            ajuste = salario * 0.25;
            novo_salario = salario + ajuste;
        }if(salario >= 3000 && salario <= 5999.99){
            ajuste = salario * 0.20;
            novo_salario = salario + ajuste;
        }if(salario >= 6000 && salario <= 9999.99){
            ajuste = salario * 0.15;
            novo_salario = salario + ajuste;
        }if(salario > 10000){
            ajuste = salario * 0.10;
            novo_salario = salario + ajuste;
        }
        soma_ajust += novo_salario;
        dif = soma_ajust - soma_atual;
    }
    printf("Soma dos salarios atuais: R$%0.2f \n", soma_atual);
    printf("Soma dos salarios ajustados: R$%0.2f \n", soma_ajust);
    printf("Diferenca entre os salarios antes e depois do reajuste: R$%0.2f \n", dif);
    system("pause");
}
