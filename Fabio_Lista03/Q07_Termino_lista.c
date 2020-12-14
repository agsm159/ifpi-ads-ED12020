#include <stdio.h>
#include <stdlib.h>

int main(){
    int x, aux, num1, num2;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    aux = 0;
    num1 = 0;
    num2 = 0;

    while (x != (num1 + num2)){
        aux = num2;
        printf("Digite um numero: ");
        scanf("%d", &num1);
        if(x == (num1 + aux)){
            break;
        }
        printf("Digite outro numero: ");
        scanf("%d", &num2);
    }
    printf("Numeros iguais.\n");
    system("pause");
    
}