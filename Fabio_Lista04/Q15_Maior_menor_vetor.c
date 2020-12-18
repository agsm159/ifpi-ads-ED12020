#include <stdio.h>
#include <stdlib.h>
#define tam 3

void main(){

    int vetor[tam], i, maior, posicaoMaior, menor, posicaoMenor;

    printf("Digite o valor dos vetores: \n");

    for(i = 0; i < tam; i++){
        scanf("%i", &vetor[i]);
    }

    maior = vetor[0];
    posicaoMaior = 0;
    for(i = 0; i < tam; i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicaoMaior = i;
        }
    }
    
    menor = vetor[0];
    posicaoMenor = 0;
    for(i = 0; i < tam; i++){
        if(vetor[i] < menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
    }
    printf("Vetor: ");
    for(i = 0; i < tam; i++){
        printf(" %i", vetor[i]);
    }
    
    printf("\nMaior valor: %i", maior);
    printf("\nMenor valor: %i", menor);
    printf("\nPosicao do maior: %i", posicaoMaior+1);
    printf("\nPosicao do menor: %i\n", posicaoMenor+1);
    system("pause");
}