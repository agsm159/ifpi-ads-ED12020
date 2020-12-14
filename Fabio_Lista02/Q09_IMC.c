#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double peso, altura, imc;
    printf("Digite seu peso(kg): ");
    scanf("%lf", &peso);
    printf("Digite sua altura(m): ");
    scanf("%lf", &altura);

    imc = peso / pow(altura, 2);
    if(imc < 25){
        printf("Seu IMC e: %0.2f ,esta normal.\n", imc);
    } if(imc >= 25 && imc <= 30){
        printf("Seu IMC e: %0.2f ,voce e obeso.\n", imc);
    } if(imc > 30){
        printf("Seus IMC e: %0.2f ,voce esta com obesidade morbida.\n", imc);
    }
    system("pause");
}
