#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 80

void main(){
    
    char frase[tam], fraseCrip[tam], vogais[tam], fraseDescrip[tam], caract;
    int i, size, posicao[tam];

    printf("Digite a frase para ser criptografada: ");
    fflush(stdin);
    gets(frase);

    size = strlen(frase);

    for(i = 0; i <= size; i++){
        caract = frase[i];
        if(caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u'){
            fraseCrip[i] = '*';
            vogais[i] = caract;
        } else{
            fraseCrip[i] = caract;
        }
    }

    for(i = 0; i <= size; i++){
        printf("%c", fraseCrip[i]);
    }
    printf("\n");

    for(i = 0; i <= size; i++){
        caract = fraseCrip[i];
        if(caract == '*'){
            fraseCrip[i] = vogais[i];
        }
    }

    for(i = 0; i <= size; i++){
        printf("%c", fraseCrip[i]);
    }
    
    printf("\n");
    system("pause");
}