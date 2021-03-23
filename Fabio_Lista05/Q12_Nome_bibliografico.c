#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    
    char caract, caract_anterior = ' ', nome_trocado[40], nome[40], nome_final[20], iniciais[10];
    int espaco = 0, tam_inicio = 0, tam_final = 0;
    
    printf("Digite o nome: ");
    gets(nome);
    
    int tam = strlen(nome);
    for(int i = 0; i < tam; i++){
        caract = nome[i];
        if(caract == ' '){
           espaco++;
        }
    }
    
    int j = 0, k = 0, l = 0;
    int espaco_percorridos = 0, espaco_anterior = 0, qnt_iniciais = 0;
    for(int i = 0; i < tam; i++){
        caract = nome[i];
        
        if(caract == ' '){
            espaco_percorridos++;
        }


        if(qnt_iniciais < espaco){
            if(caract_anterior == ' '){
                iniciais[k] = toupper(caract);
                k++;
                iniciais[k] = '.';
                k++;
                qnt_iniciais++;          
            }
        }

        if(espaco_percorridos == espaco){
            nome_final[j] = caract;
            tam_final++;
            j++; 
        }
        caract_anterior = caract;

    }
    
    for(int i = 0; i < tam_final; i++){
        printf("%c",nome_final[i]);
    }
    
    printf(",");
    
    for(int i = 0; (i <= qnt_iniciais * 2); i++){
        printf("%c",iniciais[i]);
    }
    
    printf("\n");
    system("pause");

}