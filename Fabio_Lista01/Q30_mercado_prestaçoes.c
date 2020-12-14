#include <stdio.h>
#include <stdio.h>

int main(){

    int entrada, prestacao, valor_produto;
    printf("Digite a valor do produto: R$ ");
    scanf("%d", &valor_produto);

    prestacao = valor_produto / 3;
    entrada = valor_produto - (prestacao * 2);
    
    printf("O produto sera pago com uma entrada: R$%d \n",entrada );
    printf("E terao duas parcelas de: R$%d  \n",prestacao );
    system("pause");
}
