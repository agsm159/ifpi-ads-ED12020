#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    
    char frase[40], subfrase[20];
    int inicio, fim, j = 0;
    
    printf("Digite uma frase: ");
    gets(frase);
    printf("Digite os caracteres que iram substituir: ");
    gets(subfrase);
    printf("Digite a posicao inicial: ");
    scanf("%d", &inicio);
    printf("Digite a posicao final: ");
    scanf("%d", &fim);
    
    for(int i = inicio; i <= fim; i++){
        frase[i] = subfrase[j];
        j++;
    }
    printf("Nova frase: %s \n", frase);
    system("pause");    
}