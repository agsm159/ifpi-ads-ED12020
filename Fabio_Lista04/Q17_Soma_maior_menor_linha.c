#include <stdio.h>
#include <stdlib.h>
#define tam 3

void main(){

    int m[tam][tam] = {{0}};
    int v[tam] = {0};
    int i = 0, j = 0, maiorSoma , menorSoma;

    printf("Digite os valores da matriz: \n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("[%d][%d] Numero: ",i , j);
            scanf(" %d", &m[i][j]);
        }
    }

    for( i = 0; i < tam; i++ ){
        for ( j = 0; j < tam; j++ ){
            v[i] += m[i][j];
        }
    }

    for ( i = 0; i < tam; i++ ){
        printf("[%d] Valor: %d\n", i, v[i] );
    }

    maiorSoma = v[0];
    for(i = 0; i = tam; i++){
        if(v[i] > maiorSoma){
            maiorSoma = v[i];
            printf("A maior soma e: %d", maiorSoma);
        }
    }
    
    menorSoma = v[0];
    for(i = 0; i = tam; i++){
        if(v[i] < menorSoma){
            menorSoma = v[i];
            printf("A menor soma e: %d", menorSoma);
        }
    }

    system("pause");
}