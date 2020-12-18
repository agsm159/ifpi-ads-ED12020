#include <stdio.h>
#include <stdlib.h>
#define tam 3

void main(){

    int i , j;
    int m[tam][tam];

    printf("Digite o valores da matriz: \n");
    printf("Matriz[i][j]:\n");
    for(i = 0; i < tam; i++){
        for(j = 0; j < tam; j++){
            scanf("%i", &m[i][j]);
        }
    }
    
    printf("Matriz[j][i]:\n");
    for(j = 0; j < tam; j++){
        for(i = 0; i < tam; i++){
            scanf("%i", &m[j][i]);
        }
    }
    
    if(m[i][j] != m[j][i]){
        printf("\nMatriz nao simetrica.\n");
    }
    else{
        printf("\nMatriz simetrica.\n");
    }    
    system("pause");
}