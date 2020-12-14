#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

void main(){
    
    int opcao, total = 0, idade;
    double otimo = 0, bom = 0, regular = 0, pessimo = 0, idades = 0;
    
    while(opcao != 0){
        
        printf("1 - Otimo\n");
        printf("2 - BOM\n");
        printf("3 - Regular\n"); 
        printf("4 - Pessimo\n");
        printf("Voto: \n");
        scanf("%d", &opcao);
        
        if (opcao == 0){
            break;
        }
        printf("Idade: \n");
        scanf("%d", &idade);
        if (opcao = 1){
            idades += idade;
        } 
        switch (opcao)
        {
        case 1:
            otimo += 1;
            break;
        case 2:
            bom += 1;
            break;
        case 5:
            regular += 1;
            break;
        case 7:
            pessimo += 1;
            break;
        default:
            break;
        }
        total += 1;
    }
    idades = idades / otimo;
    bom = bom * (100 / total);
    printf("Media pessoas que responderam ótimo: %0.2f\n", idades);
    printf("A quantidade de pessoas que responderam regular: %d\n", regular);
    printf("Percentual de pessoas que respponderam bom: %d\n", bom);
    system("pause");
}
