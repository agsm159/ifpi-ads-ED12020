#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#define n 80 


void main(){
    
    typedef struct registroFuncionario{
        int cpf[n];
        double salario[n];
        double salario_p_pessoa[n];
        int qnt_dep[n];
    } TFuncionario;
    
    typedef struct registroDependentes{
        int cpf_responsavel[n][n];
        int cpf[n][n];
        int idade[n][n];
    } TDependentes;
    
    int e_func = 1, i = 0, j = 0, qnt_dep, print = 1, indice, cpf;
    TFuncionario funcionario;
    TDependentes dependentes;
    
    while(e_func != 0){
        
        printf("CPF: ");
        scanf("%i", &funcionario.cpf[i]);
        fflush(stdin);
        printf("Salario: ");
        scanf("%lf", &funcionario.salario[i]);
        printf("Quantidade de Dependentes: ");
        scanf("%i", &qnt_dep);
        funcionario.qnt_dep[i]= qnt_dep;
        
        while(j < qnt_dep){
            printf("CPF: ");
            scanf("%i", &dependentes.cpf[i][j]);
            printf("Idade: ");
            scanf("%i", &dependentes.idade[i][j]);
            j++;
        }

        funcionario.salario_p_pessoa[i] = funcionario.salario[i] / qnt_dep;
        j = 0;
        i++;
        
        printf("Deseja adicionar mais um funcinario 1 - Sim | 0 - Nao: ");
        scanf("%i", &e_func);
                
    }

    printf("Deseja imprimir algum funcionario? 1 - Sim | 0 - Nao: ");
    scanf("%i", &print);

    while(print != 0){
        
        printf("Digite o CPF da pessoa que deseja visualizar as informacoes: ");
        scanf("%i", &cpf);
        fflush(stdin);
        i = 0;
        
        while(cpf == funcionario.cpf[i]){
            i++;
            indice = i - 1;
        }
        
        printf("CPF: %d \n", funcionario.cpf[indice]);
        printf("Salario: %0.2f \n", funcionario.salario[indice]);
        printf("Salario percapito: %0.2f \n\n", funcionario.salario_p_pessoa[indice]);

        for(int i = 0; i < funcionario.qnt_dep[indice]; i++){
            printf("CPF: %i \n\n", dependentes.cpf[indice][i]);
            printf("idade: %i \n\n", dependentes.idade[indice][i]);
        }

        printf("Deseja imprimir algum funcionario? 1 - Sim | 0 - Nao: ");
        scanf("%i", &print); 
    }
    system("pause");
}