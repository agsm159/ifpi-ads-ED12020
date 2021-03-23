#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    
    char usuario[40], login[10], caract;
    
    printf("Digite seu nome: ");
    gets(usuario);
    
    int tam = strlen(usuario), j = 1;
    login[0] = usuario[0];
    
    for(int i = 0; i < tam; i++){
        caract = usuario[i];
        if(caract == ' '){
            login[j] = usuario[i + 1];
            j++;         
        }
    }
    
    for(int i = 0; i < j; i++){
        printf("%c", login[i]);
    }
    
    printf("\n");
    system("pause");

}