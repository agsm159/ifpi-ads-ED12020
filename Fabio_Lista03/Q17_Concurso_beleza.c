#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    int escolha = 0;
    double altura, peso, mais_alta, mais_baixa = 1000, mais_magra = 1000, mais_gorda;
    char nome[10], nome_mais_alta[10], nome_mais_baixa[10], nome_mais_magra[10], nome_mais_gorda[10];
        while(escolha == 0){  
            printf("Digite o nome da candidata: \n");
            scanf("%s", &nome);
            if(strcmp(nome, "FIM") == 0){
                break;
            }
            printf("Digite a altura da candidata: \n");
            scanf("%lf", &altura);
            printf("Digite o peso da candidata: \n");
            scanf("%lf", &peso);
        
            if(mais_alta < altura){
                mais_alta = altura;
                strncpy(nome_mais_alta, nome, 10);
            }
            if (mais_baixa > altura){
                mais_baixa = altura;
                strncpy(nome_mais_baixa, nome, 10);        
            }
            if(mais_magra > peso){
                mais_magra = peso;
                strncpy(nome_mais_magra, nome, 10);
            }
            if (mais_gorda < peso){
                mais_gorda = peso;
                strncpy(nome_mais_gorda, nome, 10);        
            }


        }
    printf("A candidata mais alta se chama %s tem %0.2f metros.\n", nome_mais_alta, mais_alta);
    printf("A candidata mais baixa se chama %s tem %0.2f metros.\n", nome_mais_baixa, mais_baixa);
    printf("A candidata mais gorda se chama %s tem %0.2f Kg.\n", nome_mais_gorda, mais_gorda);
    printf("A candidata mais magra se chama %s tem %0.2f kg.\n", nome_mais_magra, mais_magra);
    system("pause");
}