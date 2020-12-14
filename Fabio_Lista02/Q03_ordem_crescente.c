#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &num3);

    if (num1 != num2 && num2 != num3 && num1 != num3){
        if (num1 > num2 && num2 > num3){
            printf("A ordem crescente dos numeros e: %d %d %d \n", num3, num2, num1);
        } if(num1 > num3 && num3 > num2){
            printf("A ordem crescente dos numeros e: %d %d %d \n", num2, num3, num1);
        } if(num2 > num1 && num1 > num3){
            printf("A ordem crescente dos numeros e: %d %d %d \n", num3, num1, num2);
        } if(num2 > num3 && num3 > num1){
            printf("A ordem crescente dos numeros e: %d %d %d \n", num1, num3, num2);
        } if(num3 > num1 && num1 > num2){
            printf("A ordem crescente dos numeros e: %d %d %d \n", num2, num1, num3);
        } if(num3 > num2 && num2 > num1){
            printf("A ordem crescente dos numeros e: %d %d %d \n", num3, num2, num1);
        }
    } else {
        printf("Existem dois ou mais numeros iguais.\n");
    }
    system("pause");
}
