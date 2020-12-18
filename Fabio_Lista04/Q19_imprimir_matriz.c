#include <stdio.h>
#include <stdlib.h>
#define tam 6

int impMat(int m[tam]){
    
    int i;
    for(i = 0; i < tam; i++) {
    printf("%d \t", m[i]);
    }
}

void main(){

    int i, j;
    int m[tam][tam];

    printf("Digite os valores da matriz: \n");
    for(i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            scanf("%i", &m[i][j]);
        }
    }
    
    for(i = 0; i < tam; i++) {
        impMat(m[i]);
    printf("\n");
    }
    system("pause");
}