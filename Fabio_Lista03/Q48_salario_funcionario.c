#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num_func,impostos,salario = 0,cod_func,horas,dependentes;
    double ir,inss,salario_liq;
    
    printf("Digite o numero de funcionarios: ");
    scanf("%d", &num_func);
    
    for(int i = 0; i < num_func; ++i){
        printf("Digite o codigo do funcionario: ");
        scanf("%d", &cod_func);
        printf("Digite a quantidade de horas de trabalho: ");
        scanf("%d", &horas);
        printf("Digite a quantidade de dependentes: ");
        scanf("%d", &dependentes);
        
        salario = (horas * 12) + (dependentes * 40);
        ir = salario * 0.05;
        inss = salario * 0.085;
        impostos = inss + ir;
        salario_liq = salario - impostos; 
    }
    printf("funcionario  %d\nhoras trabalhadas: %d\ndependentes: %d\n",num_func,horas,dependentes);
    printf("Salario bruto: %d\nsalario liquido: %0.2f\n", salario, salario_liq);
    printf("Valores descontados: IR: %0.2f\nINSS: %0.2f\n", ir, inss);
    system("pause");
}