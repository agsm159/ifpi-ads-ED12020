#include <stdio.h>
#include <stdlib.h>

int main(){
    float x, n, div;
    printf("Digite um valor para X: ");
    scanf("%f", &x);
    printf("Digite um valor para N: ");
    scanf("%f", &n);

    x = (x / n);
    while (n > 2){
        n--;
    }

    printf("O resultado de X / N e: %0.2f \n", x);
    printf("Valor de N: %0.2f \n", n);
    system("pause");

}
