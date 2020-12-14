#include <stdio.h>
#include <stdlib.h>

void main(){
    int quant_num, num;
    printf("Digite quantos numeros voce deseja colocar: ");
    scanf("%d", &quant_num);

    for(int i = 0; i <= quant_num; i++){
        printf("Digite um numero: ");
        scanf("%d", &num);
        printf("Numero: %d / Multiplos: ", num);

        for(int i = 1; i <= num; i++){
            if(i < num){
                if(num % i == 0){
                printf(" %d, ", i);
                }
            } else{
                printf(" %d. \n ", i);
            }
        }

    }
    system("pause");

}
