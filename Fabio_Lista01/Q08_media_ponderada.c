#include <stdio.h>
#include <stdlib.h>

int main(){

    double nota1, nota2, nota3, media_ponderada;
    int peso1, peso2, peso3;
    printf("Digite as tres notas do aluno: ");
    scanf("%lf %lf %lf", &nota1, &nota2, &nota3);
    printf("Digite os tres pesos: ");
    scanf("%lf %lf %lf", &peso1, &peso2, &peso3);

    media_ponderada = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);

    printf("A media ponderada da nota do aluno é: %0.2f \n", media_ponderada);
    system("pause");
}
