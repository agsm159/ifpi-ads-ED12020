#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int i, j, l, c;
    
    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);
    
    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            if(i == j){
                printf("1   ");
            } else{
                printf("0   ");
            }
        }
        printf("\n");
    }
    system("pause");
}