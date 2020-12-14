#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, cont;
    printf("Digite um numero: ");
    scanf("%d", &num);

    cont = 0;
    while (num >= 10){
        num = num / 10;
        cont++;
    }
    cont++;
    printf("Numero de digitos: %d \n", cont);
    system("pause");
}