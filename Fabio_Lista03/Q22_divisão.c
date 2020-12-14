#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
    
    int num1, num2, div = 0, resto = 0;
    
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);
    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);
    
    resto = num1;
    
    while(resto >= num2){
        resto = resto - num2;
        div++;
    }
    printf("Resultado divisao: %d Resto: %d\n", div, resto);
    system("pause");
}
