#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <math.h>

void main(){
    
    int opcao, total = 0, pessoas;
    double TVE = 0, Clube = 0, CV = 0, MN = 0, A10 = 0;
    
    while(opcao != -1){
        printf("2 - TVE | 4 - Clube | 5 - Cidade Verde | 7 - Meio Norte | 10 - Antena 10 |\n");
        printf("Voto: \n");
        scanf("%d", &opcao);
        printf("Pessoas: \n");
        scanf("%d", &pessoas);
        
        if (opcao == 0){
            break;
        }
        switch (opcao)
        {
        case 2:
            TVE += 1 * pessoas;
            break;
        case 4:
            Clube += 1 * pessoas;
            break;
        case 5:
            CV += 1 * pessoas;
            break;
        case 7:
            MN += 1 * pessoas;
            break;
        case 10:
            A10 += 1 * pessoas;
            break;
        default:
            break;
        }
        total += pessoas;
    }
    TVE = TVE * (100 / total);
    Clube = Clube * (100 / total);
    CV = CV * (100 / total);
    MN = MN * (100 / total);
    A10 = A10 * (100 / total);

    printf("TVE: %0.2f \n", TVE);
    printf("Clube: %0.2f \n", Clube);
    printf("Cidade Verde: %0.2f \n", CV);
    printf("Meio Norte: %0.2f \n", MN);
    printf("Antena 10: %0.2f \n", A10);
    system("pause");

}