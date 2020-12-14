#include <stdio.h>
#include <stdlib.h>

int main(){
    
    double nota1, nota2, media, prova_final, media_final;
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    media = (nota1 + nota2) / 2;
    if(media >= 7){
        printf("Aluno aprovado!\n");
    } if(media < 7){
        printf("Digite a nota da prova final: ");
        scanf("%lf", &prova_final);
    media_final = (nota1 + nota2 + prova_final) / 3;
        if(media_final >= 6){
            printf("Aluno aprovado!\n");
        } else {
            printf("Aluno reprovado!\n");
        }
    }
    system("pause");
}
