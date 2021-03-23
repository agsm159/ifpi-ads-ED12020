#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 50

void main(){
    
    int i, size;
    char verbo[tam];

    printf("Digite um verbo que termine em ER: ");
    gets(verbo);
    size = strlen(verbo);
    
    for(i = 0; i <= size - 2; i++){
        printf("%c", verbo[i]);
    }
    printf("\n");
    system("pause");
}