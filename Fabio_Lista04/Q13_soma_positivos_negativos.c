#include <stdio.h>
#include <stdlib.h>
#define tam 5


int main(){
    
    int i,soma_pos = 0,soma_neg = 0;
    int vetor[tam];
    
    for(i = 0; i < tam;i++){
        printf("Digite os elementos do arrey: ",tam);
        scanf("%d", &vetor[i]);
    }
    
    for(i = 0; i < tam; i++){
        if(vetor[i] > 0){
            soma_pos = soma_pos + vetor[i];
        } else{
            soma_neg = soma_neg + vetor[i];
        }
        
    }
    printf("A soma dos numeros positivos e: %d\n",soma_pos);
    printf("A soma dos numeros negativos e: %d\n",soma_neg);
    system("pause");
}