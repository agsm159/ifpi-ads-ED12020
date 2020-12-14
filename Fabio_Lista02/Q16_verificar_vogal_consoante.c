#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char letra;
    printf("Digite uma letra do alfabeto: ");
    scanf("%c", &letra);
    
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        printf("A letra é uma vogal!\n");
    } else{
        printf("A letra e uma consoante!\n");
    }
    system("pause");
}
