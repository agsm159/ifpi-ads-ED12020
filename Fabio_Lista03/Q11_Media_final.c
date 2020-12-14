#include <stdio.h>
#include <stdlib.h>

int main(){

    int matricula, aprov, reprov, total;
    float nota1, nota2, nota3, media_final;
    
    aprov = 0;
    reprov = 0;
    total = 0;
    
    while(matricula != 0){
        printf("Digite a matricula do aluno(coloque 0 para encerrar): ");
        scanf("%d", &matricula);

        if(matricula == 0){
            break;
        }
        total++;
        printf("Digite a primeira nota: ");
        scanf("%f", &nota1);
        printf("Digite a segunda nota: ");
        scanf("%f", &nota2);
        printf("Digite a terceira nota: ");
        scanf("%f", &nota3);
        media_final = ((nota1 * 2) + (nota2 * 3) + (nota3 * 5)) / 10;

        if(media_final >= 7){
            aprov++;
        }else{
            reprov++;
        }
    }
    printf("Alunos aprovados: %d \n", aprov);
    printf("Alunos reprovados: %d \n", reprov);
    printf("Total alunos: %d \n", total);
    system("pause");
}
