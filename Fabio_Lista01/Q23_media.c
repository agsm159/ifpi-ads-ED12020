#include <stdio.h>
#include <stdlib.h>

int main(){

    double num1, num2, num3, media;
    printf("Digite os 3 valores: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    media = (num1 + num2 + num3) / 3;

    printf("A media dos valores e: %0.2f \n", media);
    system("pause");
}
