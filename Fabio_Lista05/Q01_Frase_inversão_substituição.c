#include <stdio.h>
#include <string.h>
#define tam 80

void main(){
    
    char frase[tam], fraseCript[tam], caract;
    int i, size;

    printf("Digite a frase que sera criptografada: ");
    fflush(stdin);
    gets(frase);
    
    size = strlen(frase);

    for(i = size - 1; i >= 0; --i){
        caract = frase[i];
        if(caract == 'a' || caract == 'e' || caract == 'i' || caract == 'o' || caract == 'u'){
            fraseCript[i] = caract;
        } else{
            fraseCript[i] = '#';
        }
    }
    printf("Frase criptografada: %s\n", fraseCript);
    system("pause");
}