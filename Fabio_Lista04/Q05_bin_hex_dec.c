#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void main(){
    
    int dec = 0, bin[8], hex;
    
    for(int i = 0; i <= 7; i++){
        printf("Digite o numero binario (da direita para esquerda):");
        scanf("%d", &bin[i]); 
    }
    
    for(int i = 0; i <= 7; i++){
        dec += (bin[i] * pow(2, i));
    }
    printf("\nDecimal: %d\n", dec);
    printf("\nHexadecimal: %x\n", dec);
    system("pause");
}