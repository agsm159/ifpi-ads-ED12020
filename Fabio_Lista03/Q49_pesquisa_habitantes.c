#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int num_pes, acum = 0, salario, filhos;
    double salario_total = 0,filhos_total = 0,media_sal,media_fil;
    
    printf("Digite o numero de pessoas: ");
    scanf("%d", &num_pes);
    
    for(int i = 0; i < num_pes; ++i){
        printf("Digite o salario da pessoa: ");
        scanf("%d", &salario);
        salario_total += salario;
        
        if (salario <= 1000){
            acum += 1;
        }
        printf("Digite a quantidade de filhos: ");
        scanf("%d", &filhos);
        filhos_total = filhos;
    }
    media_sal = (salario_total/num_pes);
    media_fil = (filhos_total/num_pes);
    printf("A media salarial da populacao e: %0.2f\n", media_sal);
    printf("A media do numero de filhos  e: %0.2f\n", media_fil);
    printf("O percentual de pessoas com salario ate 1000 reais e: %d\n",((100 * acum)/num_pes));
    system("pause");
}
