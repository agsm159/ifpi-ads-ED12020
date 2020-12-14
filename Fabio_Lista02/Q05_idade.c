#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int dia_atual, mes_atual, ano_atual, dia_nasc, mes_nasc, ano_nasc, idade;
    printf("Digite o dia, mes e ano de nascimento: \n");
    scanf("%d %d %d", &dia_nasc, &mes_nasc, &ano_nasc);
    printf("Digite o dia, mes e ano da data de hoje: \n");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);

    idade = ano_atual - ano_nasc;
    if (mes_atual >= mes_nasc){
        if (mes_atual == mes_nasc){
            if(dia_atual >= dia_nasc){
                printf("Sua idade: %d \n", idade);
            } if(dia_atual < dia_nasc){
                printf("Sua idade: %d \n", idade - 1);
            }
        } else {
            printf("Sua idade: %d \n", idade);
        }
    } else {
        printf("Sua idade: %d \n", idade - 1);
    }
    system("pause");
}
