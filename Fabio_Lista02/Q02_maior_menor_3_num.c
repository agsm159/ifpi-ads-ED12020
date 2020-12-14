#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, num3, maior_num;
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o valor do terceiro numero: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3){
        maior_num = num1;
    } if(num2 > num1 && num2 > num3){
        maior_num = num2;
    } if(num3 > num1 && num3 > num2){
        maior_num = num3;
    }
    
    printf("Maior numero: %d \n", maior_num);
    system("pause");
}
