#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 500

void main(){
    
    int size;
    char texto[tam];

    printf("Digite o que quiser(Max 500 caracteres): ");
    gets(texto);
    size = strlen(texto);
    printf("Quantidade de palavras digitadas: %i\n", size);
    
    printf("\n");
    system("pause");
}