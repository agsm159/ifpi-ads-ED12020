#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

float divisao(float num){
    float aux;
    while(num >= 1){
        aux = num / 2;
        num = aux;
    }
    return num;

} 

int main() {
    float num;
    printf("Digite o numero que deseja dividir: ");
    scanf("%f", &num);
    printf("Resultado da divisao sucessivas por dois: %0.2f \n", divisao(num));
    system("pause");
}

