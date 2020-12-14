#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num, cont = 1, numf = 0;
    printf("Digite ate onde vai a sequencia de numeros: ");
    scanf("%d", &num);

    while(cont <= num){

        numf = (num - (num - cont));
        printf("%d\n ", numf);
        
        cont++;

    }
    system("pause");
}