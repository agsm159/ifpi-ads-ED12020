#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#define tam 100

void main(){
    int i = 0, k = 0, controle = 1, pontos = 0, numero[tam];
    while(controle != 20){
        int numeros[tam], comparador[tam];
        numeros[i] = (rand() % 4);

        for(int j = 0; j < controle; j++){
            printf("%d \n", numeros[j]);
        }

        system("pause");
        system("cls");

        for(int j = 0; j < controle; j++){
            printf("Digite na ordem quais numeros voce viu: ");
            scanf("%d", &comparador[j]);
        }

        for(int j = 0; j < controle; j++){
           if(comparador[j] == numeros[j]){
               printf("Voce acertou +1 ponto! \n");
               pontos++;
               printf("Total de pontos: %d \n", pontos);
           } 
           else{
               printf("Que pena, voce perdeu com %d pontos! \n", pontos);
               pontos = 0;
               controle = 0;
               break;
           }
        }
        controle++;
        i++;
    }
    system("pause");
}