#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num,cont = 1,termo_atual = 1,termo_ant = 0, seq;
    
    printf("Digite a quantidade de numeros da sequencia: ");
    scanf("%d", &num);
    
    while(num >= cont){
        printf(">>> %d\n", termo_atual);

        seq = termo_atual;
        termo_atual = termo_atual + termo_ant;
        termo_ant = seq;
        cont = cont + 1;
    }
    system("pause");
}
