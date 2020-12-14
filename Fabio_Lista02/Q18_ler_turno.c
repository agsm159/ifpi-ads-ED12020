#include <stdio.h>
#include <stdlib.h>

int main(){

    char turno;
    printf("Digite o turno em que voce estuda(M - matutino/V - vespertino/ N - noturno): ");
    scanf("%c", &turno);

    if (turno == 'M' || turno == 'm'){
        printf("Bom dia!\n");
    } if(turno == 'V' || turno == 'v'){
        printf("Boa tarde!\n");
    } if(turno == 'N' || turno == 'n'){
        printf("Boa noite!\n");
    } else{
        printf("Turno invalido!");
    }
    system("pause");
}
