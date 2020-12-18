#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int i, j, l, c, soma_pri,soma_sec = 0,soma_res,soma_tot = 0 ;
    int m[10][10];
    printf("Digite o numero de linhas: ");
    scanf("%d", &l);
    printf("Digite o numero de colunas: ");
    scanf("%d", &c);

    printf("\nElementos da matriz:\n");
    for(i = 0; i < l; i++){
        for(j = 0;j < c; j++){
            printf ("Matriz [%d][%d].........: ", i, j);
            scanf ("%d", &m[i][j]);
        }
    }

    printf("\nA Matriz:\n");
    for(i = 0;i < l;i++){
        for(j = 0; j < c; j++){
            printf ("%d  ", m[i][j]);
            if(j == c - 1){
                printf("\n");
            }
        }
    }
    
    for(i = 0; i < l; i++){
        soma_pri = soma_pri + m[i][i];
        soma_sec = soma_sec + m[i][l - i - 1];
    }

    for(i = 0; i < l; i++){
        for(j = 0; j < c; j++){
            soma_tot = soma_tot + m[i][j];
            soma_res = soma_tot - (soma_pri + soma_sec);
        }
        
    }

    printf("A soma dos elementos da diagonal principal e:  %d\n", soma_pri);
    printf("A soma dos elementos da diagonal secundaria e:  %d\n", soma_sec);
    printf("A soma dos elementos restantes e:  %d\n", soma_res);
    system("pause");
}