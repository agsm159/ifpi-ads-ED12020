#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

int main(){
    int dia_atual, mes_atual, ano_atual;
    printf("Digite o dia, mes e ano da data de hoje: \n");
    scanf("%d %d %d", &dia_atual, &mes_atual, &ano_atual);
    if (teste_data(dia_atual, mes_atual, ano_atual) == true){
        printf("Data valida \n");
    }else{
        printf("Data invalida \n");
    }
    system("pause");
}
int teste_data(dia, mes, a){
    if (mes >= 1 && mes <= 12){
        if (mes == 2 && dia <= 29 && dia >= 1){
            return true;
        }if (mes != 2 && dia <= 31 && dia >= 1){
            return true;
        }else{
            return false;
        }    
    }
        
} 
