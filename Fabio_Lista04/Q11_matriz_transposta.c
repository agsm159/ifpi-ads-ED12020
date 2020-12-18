#include <stdio.h>
#include <stdlib.h>


void main(){
    
    int i, j, l, c;
    int m[10][10],trans[10][10];
    
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

    for (i = 0; i < l; ++i)
        for (j = 0; j < c; ++j) {
            trans[j][i] = m[i][j];
        }

    
    printf("\nA Matriz Trasposta:\n");
    for (i = 0; i < c; ++i)
        for (j = 0; j < l; ++j) {
            printf("%d  ", trans[i][j]);
            if (j == l - 1)
                printf("\n");
        }
    
    system("pause");

}