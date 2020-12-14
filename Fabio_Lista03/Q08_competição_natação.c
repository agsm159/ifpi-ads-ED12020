#include <stdio.h>
#include <stdlib.h>

int main(){

    int prova, quant_nad, clas, a, b;
    float tempo;
    char nome[10], clube;

    while (prova != 0){
        printf("Qual o numero da prova: ");
        scanf("%d", &prova);
        printf("Qual a quantidade de nadadores: ");
        scanf("%d", &quant_nad);

        for(int i = 0; i <= quant_nad; i++){
            printf("Qual o nome do nadador: ");
            scanf("%s", &nome);
            printf("Qual a equipe do nadador: ");
            scanf("%s", &clube);
            printf("Qual a classificação do nadador: ");
            scanf("%d", &clas);
            printf("Qual o tempo: ");
            scanf("%f", &tempo);

            if(clube == "a"){
                switch (clas){
                case 1:
                    a += 9;
                    break;
                case 2:
                    a += 6;
                    break;
                case 3:
                    a += 4;
                    break;
                case 4:
                    a += 3;
                    break;
                default:
                    break;
                }
            }else if (clube == "b"){
                switch (clas){
                case 1:
                    b += 9;
                case 2:
                    b += 6;
                case 3:
                    b += 4;
                case 4:
                    b += 3;
                    break;
                default:
                    break;
                }
            }
        }
        if(a > b){
            printf("\nTime A: %d\n", a);
            printf("\nTime B: %d\n", b);
            printf("\n!!!Time A GANHADOR!!!\n");
        }else if(a < b){
            printf("\nTime A: %d\n", a);
            printf("\nTime B: %d\n", b);
            printf("\n!!!Time B GANHADOR!!!\n");
        }
    }
    printf("Digite 0 se nao quiser continuar...");
    scanf("%d", &prova);
    system("pause");
    
}