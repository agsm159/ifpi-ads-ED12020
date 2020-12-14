#include <stdio.h>
#include <stdlib.h>

int main(){

    int num1, num2, maior_num, menor_num;
    printf("Digite os valor dos dois numeros: ");
    scanf("%d %d", &num1, &num2);

    if (num1 > num2){
        maior_num = num1;
        menor_num = num2;
    } else {
        maior_num = num2;
        menor_num = num1;
    }
    
    printf("Maior numero: %d \n", maior_num);
    printf("Menor numero: %d \n", menor_num);
    system("pause");
}
