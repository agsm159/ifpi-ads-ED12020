#include <stdio.h>
#include <stdlib.h>
#define tam 5


void main(){
    
    int i, soma = 0, media;
    int v[tam];
    
    for(i = 0; i < tam;i++){
        printf("Digite os elementos do arrey: ",tam);
        scanf("%d", &v[i]);
    }
    
    for(i = 0; i < tam; i++){
        soma = soma + v[i];
    }
    media = soma / tam;
    printf("A soma dos elementos do arrey e: %d\n", soma);
    printf("A media dos elementos do arrey e: %d\n", media);
    system("pause");

}