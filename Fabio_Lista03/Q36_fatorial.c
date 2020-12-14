#include <stdio.h>
#include <stdlib.h>

void main(){

    int num, cont;
    printf("Digite um numero para realizar seu fatorial: ");
    scanf("%d", &num);

    cont = num;
    while (cont != 1){
        cont = cont - 1;
        num = num * cont;

    }
    printf("%d\n", num);
    system("pause");
    
}