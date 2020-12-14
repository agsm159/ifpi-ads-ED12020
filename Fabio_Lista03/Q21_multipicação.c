#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
    
    int num1, num2, multi = 0;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    for(int i = 0; i < num1; ++i){
        multi += num2;
    }
    printf("Resultado da multiplicacao: %d \n", multi);
    system("pause");
}
