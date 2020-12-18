#include <stdio.h>
#include <stdlib.h>
#define tam 3

void main(){

    int m[tam][tam] = {{0}};
    int v[tam] = {0};
    int i, j;

    printf("Digite os valores da matriz: \n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%d][%d] Numero: ",i , j);
            scanf(" %d", &m[i][j]);
        }
    }

    for(j = 0; j < tam; j++ ){
        for ( i = 0; i < tam; i++ ){
            if(i < tam){
                v[j] += m[i][j];
            }
        }
    }

    for ( i = 0; i < tam; i++ ){
        printf("[%d] Valor: %d\n", i, v[i] );
    }


    system("pause");
}