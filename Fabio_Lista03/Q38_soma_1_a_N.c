#include <stdio.h>
#include <stdlib.h>

void main(){

    int num,cont = 1, acum;

    printf("Digite o ate que numero se deve somar: ");
    scanf("%d", &num);
    acum = num;

    while (cont != num){
        
        acum = acum + (num - cont);
        cont++;
    }
    printf("Soma de todos os numeros de 1 a %d = %d \n", num, acum);
    system("pause");
}
