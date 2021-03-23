#include <stdio.h>
#include <string.h>
#define tam 80

void main(){
    
    char frase[tam];
    int i = 0;
    
    printf("Digite uma frase: ");
    fflush(stdin);
    gets(frase);
    
    while(frase[i]!='\0'){ 
        if(frase[i]==' ') 
            printf("\n"); 
        else 
            printf("%c",frase[i]); 
        i++; 
    } 
    
    printf("\n");
    system("pause"); 
}