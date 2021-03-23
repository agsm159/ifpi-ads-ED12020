#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 100

void main(){
    
    char frase[tam], nova_frase[tam], caract;
    int j = 0;

    printf("Digite a frase: ");
    gets(frase);
    
    int size = strlen(frase);
    
    for(int i = 0; i < size; i++){
        caract = frase[i];
        nova_frase[j] = caract;
        j++;
        nova_frase[j] = caract;
        j++;
    }
    for(int i = 0; i < j; i++){
        printf("%c", nova_frase[i]);
    }
    printf("\n");
    system("pause");

}