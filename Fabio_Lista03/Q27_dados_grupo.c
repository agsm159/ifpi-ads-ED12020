#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int op_sexo, idade, total = 0, homem = 0, mulher = 0, op_situacao;
    double solteiro_h = 0, solteiro_m = 0, divorciadas = 0, idade_h = 0, idade_m = 0;
    
    while(op_sexo != 0){
        printf("1 - Masculino | 2 - Feminino |\n");
        printf("opcao: \n");
        scanf("%d", &op_sexo);
        if (op_sexo == 0){
            break;
        }
        printf("1 - Casado | 2 - Solteiro | 3 - Divorciado | 4 - Viúvo|\n");
        printf("Voto: \n");
        scanf("%d", &op_situacao);

        printf("Idade: \n");
        if(op_sexo == 1){
            if(op_situacao == 2){
                solteiro_h++;
            }
            scanf("%d", &idade);
            idade_h += idade;
            homem++;
            
        }else{
            if(op_situacao == 2){
                solteiro_m++;
            }
            scanf("%d", &idade);
            idade_m += idade;
            if(op_situacao == 3 && idade >= 30){
                divorciadas++;
            }
            mulher++;
        }
        }
    solteiro_m = solteiro_m * (100 / mulher); 
    idade_m = idade_m / mulher;
    solteiro_h = solteiro_h * (100 / homem); 
    idade_h = idade_h / homem;
    printf("\n Media Idade de Mulheres: %0.2f \n", idade_m);
    printf("\n Media Idade de Homens: %0.2f \n", idade_h);
    printf("\n Percentual Mulheres Solteiras: %0.2f \n", solteiro_m);
    printf("\n Percentual Homens Solteiros: %0.2f \n", solteiro_h);
    printf("\n Mulheres Divorciadas acima de 30 anos: %0.2f \n", divorciadas);
    system("pause");
}
