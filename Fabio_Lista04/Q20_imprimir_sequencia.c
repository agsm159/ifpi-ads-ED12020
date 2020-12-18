#include <stdio.h>
#include <stdlib.h>
#define tam 5


void main(){

    int i, j, cont = 1;
    int m[tam][tam];

    printf("Digite os valores da matriz: \n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            m[i][j] = cont;
            cont += 1;
        }
    }
    
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            if(m[i][j] < 10){
                printf("%d \t", m[i][j]);
            }
            else {
                printf("%d \t", m[i][j]);
            }
            
        }
        printf("\n");

    }
    system("pause");
}