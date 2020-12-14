#include <stdio.h>
#include <stdlib.h>

void main(){

    int cod_jogador, cont1 = 0, cont2 = 0;
     
    for(int i = 1;i <= 21; i++){
        printf("Qual o jogador ganhou ponto(1 ou 2): ");
        scanf("%d", &cod_jogador);
        if(cod_jogador == 1){
            cont1++;
        }else if(cod_jogador == 2){
            cont2++;
        }else{
            printf("Codigo invalido!");
        }
    }
    if (cont1 > cont2){
        printf("O jogador 1 ganhou!");
    }if(cont2 > cont1){
        printf("O jogador 2 ganhou!");
    }
    system("pause");
}
