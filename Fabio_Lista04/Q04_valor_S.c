#include <stdio.h>
#include <stdlib.h>


void main(){
    int soma = 0, num, v[19];

    for(int i = 0; i <= 19; i++){
        printf("Digite o %d numero do vetor A: ", i);
        scanf("%d", &num);
        v[i] = num;
    }

    for(int i = 0; i <= 19; i++){
        soma += pow(v[i] - v[19 - i], 2);
    }

    printf("soma: %d ", soma);

    system("pause");
}