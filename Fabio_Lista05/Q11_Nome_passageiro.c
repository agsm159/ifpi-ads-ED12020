#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    
    char caract, nome_trocado[40], nome[40], nome_inicio[20], nome_final[20];
    int espaco = 0, tam_inicio = 0, tam_final = 0;
    
    printf("Digite o nome do passageiro: ");
    gets(nome);
    
    int size = strlen(nome);
    for(int i = 0; i < size; i++){
        caract = nome[i];
        if(caract == ' '){
           espaco++;
        }
    }
    
    int j = 0;
    int espaco_percorridos = 0;
    for(int i = 0; i < size; i++){
        caract = nome[i];
        
        if(caract == ' '){
            espaco_percorridos++;
        }

        if(espaco_percorridos == 0){
            nome_inicio[i] = caract;
            tam_inicio++; 
        }

        if(espaco_percorridos == espaco){
            nome_final[j] = caract;
            tam_final++;
            j++; 
        }
    }
    
    for(int i = 0; i < tam_final; i++){
        printf("%c",nome_final[i]);
    }
    
    printf("/");
    
    for(int i = 0; i < tam_inicio; i++){
        printf("%c",nome_inicio[i]);
    }

    printf("\n");
    system("pause");
}