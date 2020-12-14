#include <stdio.h>
#include <stdlib.h>

int main(){

    double nota1, nota2, media;
    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota1);
    printf("Digite a primeira nota: \n");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;
    if(media <= 10 && media >= 9){
        printf("Sua media e: %0.2f ---- A ---- APROVADO\n", media);
    } if(media < 9 && media >= 7.5){
        printf("Sua media e: %0.2f ---- B ---- APROVADO\n", media);
    } if(media < 7.5 && media >= 6){
        printf("Sua media e: %0.2f ---- C ---- APROVADO\n", media);
    } if(media < 6 && media >= 4){
        printf("Sua media e: %0.2f ---- D ---- REPROVADO\n", media);
    } if(media < 4 && media >= 0){
        printf("Sua media e: %0.2f ---- E ---- REPROVADO\n", media);
    }
    system("pause");
}
