#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>
#include <locale.h>

int main(){
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);
    printf("Digite o segundo numero: ");
    scanf("%d", &b);



    printf("MMC = %d\n", mmc(a ,b));
    system("pause");

}
int mdc(int n1, int n2){
    while(n2 != 0){
        int resto = n1 % n2;
        n1 = n2;
        n2 = resto;
    }
    return n1;
}

int mmc(int n1, int n2){
    return n1 * (n2 / mdc(n1, n2));
}