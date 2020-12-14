#include <stdio.h>
#include <stdlib.h>

int main(){

    int dia1, mes1, ano1, dia2, mes2, ano2;
    printf("Digite a primeira data(dia/mes/ano): \n");
    scanf("%d %d %d",&dia1, &mes1, &ano1);
    printf("Digite a primeira data(dia/mes/ano): \n");
    scanf("%d %d %d",&dia2, &mes2, &ano2);

    if(ano1 == ano2){
        if(mes1 == mes2){
            if(dia1 == dia2){
                printf("As duas datas sao iguais. \n");
            } if(dia1 > dia2){
                printf("A data mais recente e: %d/%d/%d \n", dia1, mes1, ano1);
            } else{
                printf("A data mais recente e: %d/%d/%d \n", dia2, mes2, ano2);
            }
        }if(mes1 > mes2){
            printf("A data mais recente e: %d/%d/%d \n", dia1, mes1, ano1);
        }if(mes1 < mes2){
            printf("A data mais recente e: %d/%d/%d \n", dia2, mes2, ano2);
        }
    }if(ano1 > ano2){
        printf("A data mais recente e: %d/%d/%d \n", dia1, mes1, ano1);
    } if(ano1 < ano2){
        printf("A data mais recente e: %d/%d/%d \n", dia2, mes2, ano2);
    }
    system("pause");
}
