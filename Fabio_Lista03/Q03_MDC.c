#include <stdio.h>
#include <stdlib.h>

int main(){

    int a, b, mdc, div;
    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    div = 2;

    while (div <= a){
        if (a % div == 0 && b % div == 0){
            mdc = div;

        }
        div += 1;
    }
    printf("MDC(%d, %d) = %d\n", a,b, mdc);
    system("pause");
}
