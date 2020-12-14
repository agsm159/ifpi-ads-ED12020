#include <stdio.h>
#include <stdlib.h>

void main(){

    int num, numf = 0, cont = 0;
    printf("Digite ate onde vai a sequencia de pares: ");
    scanf("%d", &num);

    while(cont <= num){

        numf = (num - (num - cont));
        if(numf % 2 == 0){
            printf("%d\n", numf);
        }
        cont++;
    }
    system("pause");
}