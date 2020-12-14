#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void main(){
    int num_ind = 1, num_maior = 1, num_menor = 1;
    double peso, peso_maior = 0, peso_menor = 1000;
    
    while(num_ind != 0){
        printf("Digite o numero de identificacao do boi(0 para interromper): ");
        scanf("%d", &num_ind);
        
        if(num_ind == 0){
            break;
        }
        printf("Digite o peso do boi: ");
        scanf("%d", &peso);
        if(peso_maior < peso){
            num_maior = num_ind;
            peso_maior = peso;
        }
        if(peso_menor > peso){
            num_menor = num_ind;
            peso_menor = peso;
        }
    } 
    printf("O boi mais pesado possui numero de identificacao %d e peso %d\n",num_maior,peso_maior);
    printf("O boi mais leve possui numero de identificacao %d e peso %d\n",num_menor,peso_menor);
    system("pause");
}
